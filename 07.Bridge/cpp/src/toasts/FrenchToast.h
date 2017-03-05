#ifndef FRENCHTOAST_H
#define FRENCHTOAST_H

#include "./GenericToast.h"

class FrenchToast : public GenericToast {
public:
    FrenchToast();
    FrenchToast(const FrenchToast& orig);
    virtual ~FrenchToast();
    void makeToast(int height, int width, int thickness);
private:

};

#endif