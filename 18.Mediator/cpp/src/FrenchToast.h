#ifndef FRENCHTOAST_H
#define FRENCHTOAST_H

#include "./Toast.h"
#include <iostream>

class FrenchToast : public Toast {
public:
    FrenchToast();
    FrenchToast(const FrenchToast& orig);
    virtual ~FrenchToast();
    void whatAmI();
private:

};

#endif