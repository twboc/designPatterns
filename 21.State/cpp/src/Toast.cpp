#pragma once
#include "Toast.h"

void Toast::rememberMe(ToastMemory* toastMemory, std::string taostType){
    std::cout << "Memorizing... " << std::endl;
    toastMemory->rememberToast(taostType);
};