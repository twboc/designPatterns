#ifndef TOASTWITHBUTTER_H
#define TOASTWITHBUTTER_H

#include "./Toast.h"
#include <iostream>
#include <cstdlib>

class ToastWithButter : public Toast {
public:
    ToastWithButter();
    ToastWithButter(Toast* toast);
    ToastWithButter(const ToastWithButter& orig);
    virtual ~ToastWithButter();
    void myIngredients();
private:

    Toast* wrappee = NULL;
    
};

#endif /* TOASTWITHBUTTER_H */

