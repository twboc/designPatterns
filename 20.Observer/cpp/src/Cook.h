#ifndef COOK_H
#define COOK_H

#include <iostream>
#include "./Waiter.h"

class Cook {
public:
    Cook();
    Cook(const Cook& orig);
    virtual ~Cook();
    void cookedToast(Waiter* waiter, std::string toastType);
private:

};

#endif