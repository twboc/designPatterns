#include "PolishToast.h"

PolishToast::PolishToast() {
    this->toastType = "Polish Toast";
}
PolishToast::PolishToast(const PolishToast& orig) { }
PolishToast::~PolishToast() { }

std::string PolishToast::getType(){
    return this->toastType;
};

void PolishToast::rememberMe(ToastMemory* toastMemory){
    Toast::rememberMe(toastMemory, this->toastType);
};