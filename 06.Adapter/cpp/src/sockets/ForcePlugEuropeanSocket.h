#ifndef FORCEPLUGEUROPEANSOCKET_H
#define FORCEPLUGEUROPEANSOCKET_H

#include "../types.cpp"
#include "./AmericanSocketInterface.h"

class ForcePlugEuropeanSocket : public AmericanSocketInterface {
public:
    ForcePlugEuropeanSocket();
    ForcePlugEuropeanSocket(const ForcePlugEuropeanSocket& orig);
    virtual ~ForcePlugEuropeanSocket();
    
    ForcePlugEuropeanSocket* forceThePlug();
    Cable voltage();
    Cable live();
    Cable neutral();
    Cable earth();
    
    Shape shape();
private:
    AmericanSocketInterface* socket;
};

#endif