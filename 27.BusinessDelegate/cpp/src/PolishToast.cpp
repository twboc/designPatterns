#pragma once
#include "PolishToast.h"

PolishToast::PolishToast() { }
PolishToast::PolishToast(const PolishToast& orig) { }
PolishToast::~PolishToast() { }

void PolishToast::eatToast(){
    std::cout << "I am eating a Polish toast!!!" << std::endl;
};