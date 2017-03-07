#ifndef FATPOLISHTOAST_H
#define FATPOLISHTOAST_H

#include "Toast.h"

#include <iostream>

class FatPolishToast : public Toast {
public:
    FatPolishToast();
    FatPolishToast(const FatPolishToast& orig);
    virtual ~FatPolishToast();
    void eatToast();
private:

};

#endif /* FATPOLISHTOAST_H */

