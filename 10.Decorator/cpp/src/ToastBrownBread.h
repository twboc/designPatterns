#ifndef TOASTBROWNBREAD_H
#define TOASTBROWNBREAD_H

#include <iostream>
#include <cstdlib>
#include "Toast.h"

class ToastBrownBread : public Toast {
public:
    ToastBrownBread();
    ToastBrownBread(Toast* tost);
    ToastBrownBread(const ToastBrownBread& orig);
    virtual ~ToastBrownBread();
    void myIngredients();
private:
    Toast* wrappee = NULL;

};

#endif