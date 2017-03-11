#include "ToastWaiter.h"
#include "./Customer.h"

ToastWaiter::ToastWaiter() { }
ToastWaiter::ToastWaiter(const ToastWaiter& orig) { }
ToastWaiter::~ToastWaiter() { }

Toast* ToastWaiter::orderToast(std::string toastType, Customer& customer){
    Toast* toast = NULL;
    if(toastType == "Polish Toast"){
        toast = new PolishToast();
    }else if(toastType == "French Toast"){
        toast = new FrenchToast();
    }else if(toastType == "Italian Toast"){
        toast = new ItalianToast();
    }else{
        std::cout << "I am sorry.... I don't know this toast...." << std::endl;
    }
    std::cout << "Your order is in progress..." << std::endl;
//    customer.eatAToast(toast);
    customer.eatAToast(toast);
    return toast;
};