#ifndef POLISHTOAST_H
#define POLISHTOAST_H

#include "./Toast.h"
#include <iostream>

class PolishToast : public Toast {
public:
    PolishToast();
    PolishToast(const PolishToast& orig);
    virtual ~PolishToast();
    void whatAmI();
private:

};

#endif