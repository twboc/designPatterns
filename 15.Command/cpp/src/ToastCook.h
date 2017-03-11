#ifndef TOASTCOOK_H
#define TOASTCOOK_H

#include "./Recipe.h"
#include <iostream>

class ToastCook {
public:
    ToastCook();
    ToastCook(const ToastCook& orig);
    virtual ~ToastCook();
    Toast* cookMeThis(Recipe* recipe);
private:

};

#endif