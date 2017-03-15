#ifndef TOAST_H
#define TOAST_H

#include <iostream>
#include "./ToastMemory.h"

class Toast {
public:
    virtual std::string getType() = 0;
    void rememberMe(ToastMemory* toastMemory, std::string toastType);
private:

};

#endif