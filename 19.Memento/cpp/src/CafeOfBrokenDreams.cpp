#include "CafeOfBrokenDreams.h"

CafeOfBrokenDreams::CafeOfBrokenDreams() { }
CafeOfBrokenDreams::CafeOfBrokenDreams(const CafeOfBrokenDreams& orig) { }
CafeOfBrokenDreams::~CafeOfBrokenDreams() { }

void CafeOfBrokenDreams::setToastServed(std::string toast){
    this->toastType = toast;
};

std::string CafeOfBrokenDreams::getToastServed(){
    return this->toastType;
};

ToastMemories* CafeOfBrokenDreams::rememberThisToast(){
    return new ToastMemories(this->toastType);
};

std::string CafeOfBrokenDreams::getToastFromMemory(ToastMemories* taostMemory){
    this->toastType = taostMemory->getMemory();
    return this->toastType;
};