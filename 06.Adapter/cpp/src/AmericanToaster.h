#ifndef AMERICANTOASTER_H
#define AMERICANTOASTER_H

#include <iostream>

#include "./sockets/AmericanSocketInterface.h"

class AmericanToaster {
public:
    AmericanToaster();
    AmericanToaster(const AmericanToaster& orig);
    virtual ~AmericanToaster();
    
    void plugIn(AmericanSocketInterface* powerSource);
    void boil();
private:
    AmericanSocketInterface* power;

};

#endif