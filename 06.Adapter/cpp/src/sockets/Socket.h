#ifndef SOCKET_H
#define SOCKET_H

#include "EuropeanSocketInterface.h"

#include "../types.cpp"

class Socket : public EuropeanSocketInterface {
public:
    Socket();
    Socket(const Socket& orig);
    virtual ~Socket();
    
    Cable voltage();
    Cable live();
    Cable neutral();
    Cable earth();
    
    Shape shape();
    
private:

};

#endif /* SOCKET_H */

