#ifndef TOASTWITHJAM_H
#define TOASTWITHJAM_H

#include "./Toast.h"
#include <iostream>
#include <cstdlib>

class ToastWithJam : public Toast {
public:
    ToastWithJam();
    ToastWithJam(Toast* toast);
    ToastWithJam(const ToastWithJam& orig);
    virtual ~ToastWithJam();
    void myIngredients();
private:
    Toast* wrappee = NULL;
};

#endif /* TOASTWITHJAM_H */

