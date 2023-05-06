#include "TastyPolishToast.h"

TastyPolishToast::TastyPolishToast() { }
TastyPolishToast::TastyPolishToast(const TastyPolishToast& orig) { }
TastyPolishToast::~TastyPolishToast() { }

Toast* TastyPolishToast::eat(){
    std::cout << "Yum! This toast is amazing!!!" << std::endl;
    return this;
};