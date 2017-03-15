#include "ToastMemory.h"

ToastMemory::ToastMemory() { }
ToastMemory::ToastMemory(const ToastMemory& orig) {}
ToastMemory::~ToastMemory() { }

void ToastMemory::rememberToast(std::string toastName){
    this->memory = toastName;
};

std::string ToastMemory::getMemory(){
    return this->memory;
};