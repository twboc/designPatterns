#include "ToastOrder.h"

ToastOrder::ToastOrder(std::string taostType) {
    this->taostType = taostType;
}
ToastOrder::ToastOrder(const ToastOrder& orig) { }
ToastOrder::~ToastOrder() { }

void ToastOrder::subscribeCustomer(Customer* customer){
    std::cout << "Customer " << customer->getName() << " waiting for " << this->taostType << std::endl;
    this->waitingCustomers.push_back(customer);
};

void ToastOrder::yellLikeHell(){
    std::cout << std::endl;
    std::cout << "Notify!!!!" << std::endl;
    for(std::vector<Customer*>::size_type i = 0; i != this->waitingCustomers.size(); i++) {
        std::cout << this->waitingCustomers[i]->getName() <<  " your order is ready !!!!" << std::endl;
    }
};