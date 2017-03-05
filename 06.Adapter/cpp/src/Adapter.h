#ifndef ADAPTER_H
#define ADAPTER_H

#include "./types.cpp"

#include "./sockets/EuropeanSocketInterface.h"
#include "./sockets/AmericanSocketInterface.h"

class Adapter : public AmericanSocketInterface {
public:
    Adapter();
    Adapter(const Adapter& orig);
    virtual ~Adapter();
    void plugIn(EuropeanSocketInterface* outlet);
    int voltage();
    Cable live();
    Cable neutral();
    Shape shape();
private:
    EuropeanSocketInterface* socket;

};

#endif

