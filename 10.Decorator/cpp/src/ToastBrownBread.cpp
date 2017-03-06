#include "ToastBrownBread.h"

ToastBrownBread::ToastBrownBread(){
    std::cout << "Toast with brown bread..." << std::endl;
}
ToastBrownBread::ToastBrownBread(Toast* tost) { 
    std::cout << "Use brown bread..." << std::endl;
    wrappee = tost;
}
ToastBrownBread::ToastBrownBread(const ToastBrownBread& orig) { }
ToastBrownBread::~ToastBrownBread() { 
    delete wrappee;
}

void ToastBrownBread::myIngredients(){
    std::cout << "I have brown bread." << std::endl;
    if (wrappee != NULL) {
        wrappee->myIngredients();
    }
}