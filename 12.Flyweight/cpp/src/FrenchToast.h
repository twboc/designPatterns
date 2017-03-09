#ifndef FRENCHTOAST_H
#define FRENCHTOAST_H

#include <iostream>
#include "Toast.h"

class FrenchToast : public Toast{
public:
    FrenchToast();
    FrenchToast(const FrenchToast& orig);
    virtual ~FrenchToast();
    void whoAmI();
private:

};

#endif