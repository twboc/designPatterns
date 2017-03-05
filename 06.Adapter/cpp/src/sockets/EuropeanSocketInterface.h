#ifndef EUROPEANSOCKETINTERFACE_H
#define EUROPEANSOCKETINTERFACE_H

#include "../types.cpp"


class EuropeanSocketInterface {
public:

    virtual Cable voltage() = 0;
    virtual Cable live() = 0;
    virtual Cable neutral() = 0; 
    virtual Cable earth() = 0;
    
    virtual Shape shape() = 0;
    
private:

};

#endif

