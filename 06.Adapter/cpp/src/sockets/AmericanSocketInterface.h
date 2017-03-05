#ifndef AMERICANSOCKETINTERFACE_H
#define AMERICANSOCKETINTERFACE_H

#include "../types.cpp"

class AmericanSocketInterface {
public:
    virtual Cable voltage() = 0;
    virtual Cable live() = 0;
    virtual Cable neutral() = 0; 
    
    virtual Shape shape() = 0;
private:

};

#endif 