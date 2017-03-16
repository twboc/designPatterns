#ifndef FRENCHTOAST_H
#define FRENCHTOAST_H

#include "./Toast.cpp"
#include <iostream>

class FrenchToast : public Toast {
public:
    FrenchToast();
    FrenchToast(const FrenchToast& orig);
    virtual ~FrenchToast();
    void makeToast();
private:

};

#endif