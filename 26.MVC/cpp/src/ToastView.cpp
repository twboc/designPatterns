#pragma once
#include "ToastView.h"

ToastView::ToastView() { }
ToastView::ToastView(const ToastView& orig) { }
ToastView::~ToastView() { }

void ToastView::getToastInfo(std::string toastType, int toastTemperature, std::string toastJam) {
    std::cout << "This is my toast: " << toastType << std::endl;
    std::cout << "Temperature: " << toastTemperature << std::endl;
    std::cout << "Jam: " << toastJam << std::endl;
};