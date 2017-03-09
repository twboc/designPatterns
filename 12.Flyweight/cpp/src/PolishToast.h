#ifndef POLISHTOAST_H
#define POLISHTOAST_H

#include <iostream>
#include "./Toast.h"

class PolishToast : public Toast {
public:
    PolishToast();
    PolishToast(const PolishToast& orig);
    virtual ~PolishToast();
    void whoAmI();
private:

};

#endif /* POLISHTOAST_H */

