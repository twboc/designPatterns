#ifndef TOASTWITHSUGAR_H
#define TOASTWITHSUGAR_H

#include "./Toast.h"
#include <cstdlib>
#include <iostream>

class ToastWithSugar : public Toast {
public:
    ToastWithSugar();
    ToastWithSugar(Toast* toast);
    ToastWithSugar(const ToastWithSugar& orig);
    virtual ~ToastWithSugar();
    void myIngredients();
private:
    Toast* wrappee = NULL;

};

#endif /* TOASTWITHSUGAR_H */

