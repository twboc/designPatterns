#include "ToastWithSugar.h"

ToastWithSugar::ToastWithSugar() { 
    std::cout << "Toast with sugar..." << std::endl;
}
ToastWithSugar::ToastWithSugar(Toast* toast) { 
    std::cout << "Put sugar..." << std::endl;
    wrappee = toast;
}
ToastWithSugar::ToastWithSugar(const ToastWithSugar& orig) { }
ToastWithSugar::~ToastWithSugar() {
    std::cout << "Eat sugar..." << std::endl;
    delete wrappee;
}

void ToastWithSugar::myIngredients(){
    std::cout << "I have sugar." << std::endl;
    if (wrappee != NULL) {
        wrappee->myIngredients();
    }
    
}