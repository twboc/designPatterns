#include "EnglishToast.h"

EnglishToast::EnglishToast() {
    this->toastType = "English Toast";
}
EnglishToast::EnglishToast(const EnglishToast& orig) { }
EnglishToast::~EnglishToast() { }

std::string EnglishToast::getType(){
    return this->toastType;
};

void EnglishToast::rememberMe(ToastMemory* toastMemory){
    Toast::rememberMe(toastMemory, this->toastType);
};