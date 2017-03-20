#pragma once
#include "ToastDelegate.h"

ToastDelegate::ToastDelegate() {
    this->taostLookup = new ToastLookup();
}
ToastDelegate::ToastDelegate(const ToastDelegate& orig) { }
ToastDelegate::~ToastDelegate() { }

void ToastDelegate::setToastType(std::string toastType){
    this->toastType = toastType;
};

void ToastDelegate::serveToast(){
    this->toast = this->taostLookup->getToast(this->toastType);
    this->toast->eatToast();
};