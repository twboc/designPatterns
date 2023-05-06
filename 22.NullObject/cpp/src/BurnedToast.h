#ifndef BURNEDTOAST_H
#define BURNEDTOAST_H

#include <iostream>
#include <cstdlib>
#include "./Toast.cpp"

class BurnedToast : public Toast {
public:
    BurnedToast();
    BurnedToast(const BurnedToast& orig);
    virtual ~BurnedToast();
    Toast* eat();
private:

};

#endif