#include "FrenchToast.h"

#include <iostream>

FrenchToast::FrenchToast() { }
FrenchToast::FrenchToast(const FrenchToast& orig) { }
FrenchToast::~FrenchToast() { }

void FrenchToast::makeToast(int height, int width, int thickness){

    std::cout << "Le French toast that is le high: " << height 
            << std::endl
            << " le wide: " << width 
            << std::endl 
            << " le thick: " << thickness
            << std::endl
            << " => s'il vous plait!!!"
            << std::endl;
    
}