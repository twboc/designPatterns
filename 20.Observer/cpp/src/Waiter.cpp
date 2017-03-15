#include "Waiter.h"

Waiter::Waiter() { }
Waiter::Waiter(const Waiter& orig) { }
Waiter::~Waiter() { }
bool Waiter::checkIfInMenu(std::string toastType){
    if (toastType == "Polish Toast") {
        return true;
    }else if (toastType == "French Toast") {
        return true;
    }else if (toastType == "English Toast") {
        return true;
    }else{
        return false;
    }
};
void Waiter::takeOrder(Customer* customer, std::string toastType){
    
    std::cout << "Order: " << toastType << std::endl;
    if (!checkIfInMenu(toastType)) {
        return;
    }
    if (!waitingOrders[toastType]) {
        waitingOrders[toastType] = new ToastOrder(toastType);
    }
    waitingOrders[toastType]->subscribeCustomer(customer);

};

void Waiter::takeDish(std::string toastType){
    if (!checkIfInMenu(toastType)) {
        return;
    }
    waitingOrders[toastType]->yellLikeHell();
};