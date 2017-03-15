#ifndef TOSTORDER_H
#define TOSTORDER_H

#include <iostream>
#include <vector>
#include "./Customer.h"

class ToastOrder {
public:
    ToastOrder(std::string taostType);
    ToastOrder(const ToastOrder& orig);
    virtual ~ToastOrder();
    void subscribeCustomer(Customer* customer);
    void yellLikeHell();
private:
    std::vector<Customer*> waitingCustomers;
    std::string taostType;
};

#endif