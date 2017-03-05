#include "Toast.h"
#include <iostream>

Toast::~Toast() {}

Toast::Toast(std::string toastType, std::string breadType, std::string jamFlavor) {
    this->toastType = toastType;
    this->breadType = breadType;
    this->jamFlavor = jamFlavor;
}

std::string Toast::getToastType(){
//    std::cout << this->toastType << std::endl;
    return this->toastType;
};
std::string Toast::getBreadType(){
//    std::cout << this->breadType << std::endl;
    return this->breadType;
};
std::string Toast::getJamFlavor(){
//    std::cout << this->jamFlavor << std::endl;
    return this->jamFlavor;
};

void Toast::show(){
    std::cout << "[ Type: " << this->toastType
            << " Bread: " << this->breadType
            << " Jam: " << this->jamFlavor
            << " ]" << std::endl;
};

