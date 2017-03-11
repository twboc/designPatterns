#ifndef ITALIANTOAST_H
#define ITALIANTOAST_H

#include "./Toast.h"
#include <iostream>

class ItalianToast : public Toast {
public:
    ItalianToast();
    ItalianToast(const ItalianToast& orig);
    virtual ~ItalianToast();
    void whatAmI();
private:

};

#endif