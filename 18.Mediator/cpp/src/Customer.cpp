#include "Customer.h"
#include "./ToastWaiter.h"

Customer::Customer() { }
Customer::Customer(const Customer& orig) { }
Customer::~Customer() { }

Toast* Customer::order(std::string toastType, ToastWaiter& toastWaiter){
    toastWaiter.orderToast(toastType, *this);
};

void Customer::eatAToast(Toast* toast){

    std::cout << "I am eating a toast!!! The toast is: " << std::endl; 
    
    toast->whatAmI();


};