#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "./Toast.h"

class ToastWaiter;

class Customer {
public:
    Customer();
    Customer(const Customer& orig);
    virtual ~Customer();
    Toast* order(std::string toastType, ToastWaiter& toastWaiter);
    void eatAToast(Toast* toast);
private:

};

#endif