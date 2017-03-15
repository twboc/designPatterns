#ifndef WAITER_H
#define WAITER_H

#include <iostream>
#include <map>
#include "./ToastOrder.cpp"
#include "./Customer.cpp"

class Waiter {
public:
    Waiter();
    Waiter(const Waiter& orig);
    virtual ~Waiter();
    void takeOrder(Customer* customer, std::string toastType);
    void takeDish(std::string toastType);
    bool checkIfInMenu(std::string toastType);
private:
    
    std::map<std::string, ToastOrder*> waitingOrders;

};

#endif /* WAITER_H */

