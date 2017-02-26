#pragma once
#include "Wheel.h"

Wheel::Wheel() { }
Wheel::Wheel(const Wheel& orig) { }
Wheel::~Wheel() { }

std::string Wheel::setWheelType(std::string wheel){
    return wheelType = wheel;
};
std::string Wheel::getWheelType(){
    return wheelType;
};