#ifndef TOASTWAITER_H
#define TOASTWAITER_H

#include <iostream>
#include "./Toast.h"
#include "./FrenchToast.cpp"
#include "./ItalianToast.cpp"
#include "./PolishToast.cpp"

class Customer;

class ToastWaiter {
public:
    ToastWaiter();
    ToastWaiter(const ToastWaiter& orig);
    virtual ~ToastWaiter();
    Toast* orderToast(std::string toastType, Customer& customer);
private:

};

#endif