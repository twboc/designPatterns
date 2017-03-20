#pragma once
#include "ToastLookup.h"
#include "FrenchToast.h"
#include "PolishToast.h"

ToastLookup::ToastLookup() { }
ToastLookup::ToastLookup(const ToastLookup& orig) { }
ToastLookup::~ToastLookup() { }

Toast* ToastLookup::getToast(std::string toastType){
    if (toastType == "French Toast") {
        return new FrenchToast();
    }else{
        return new PolishToast();
    }
};