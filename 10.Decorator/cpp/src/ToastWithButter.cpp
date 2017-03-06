#include "ToastWithButter.h"


#include "./Toast.h"

ToastWithButter::ToastWithButter(){
    std::cout << "Toast with butter..." << std::endl;
}
ToastWithButter::ToastWithButter(Toast* tost) { 
    std::cout << "Put butter..." << std::endl;
    wrappee = tost;
}
ToastWithButter::ToastWithButter(const ToastWithButter& orig) { }
ToastWithButter::~ToastWithButter() { 
    std::cout << "Eat butter..." << std::endl;
    delete wrappee;
}

void ToastWithButter::myIngredients(){
    std::cout << "I have butter." << std::endl;
    if (wrappee != NULL) {
        wrappee->myIngredients();
    }
}

