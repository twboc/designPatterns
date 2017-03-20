#pragma once
#include "FrenchToast.h"

FrenchToast::FrenchToast() { }
FrenchToast::FrenchToast(const FrenchToast& orig) { }
FrenchToast::~FrenchToast() { }

void FrenchToast::eatToast(){
    std::cout << "I am eating a French toast!!!" << std::endl;
};