#include "GermanToast.h"

#include <iostream>

GermanToast::GermanToast() { }
GermanToast::GermanToast(const GermanToast& orig) { }
GermanToast::~GermanToast() { }

void GermanToast::makeToast(int height, int width, int thickness){

    std::cout << "Ja, zis iz a German toast that is zis high: " << height 
            << std::endl
            << " und zis wide: " << width 
            << std::endl 
            << " und zis thick: " << thickness
            << std::endl
            << " => bitte schoen!!!"
            << std::endl;
    
}