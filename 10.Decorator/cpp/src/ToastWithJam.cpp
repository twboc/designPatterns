#include "ToastWithJam.h"

ToastWithJam::ToastWithJam() {
    std::cout << "Toast with jam..." << std::endl;
}
ToastWithJam::ToastWithJam(Toast* toast) {
    std::cout << "Put jam..." << std::endl;
    wrappee = toast;
}
ToastWithJam::ToastWithJam(const ToastWithJam& orig) { }
ToastWithJam::~ToastWithJam() { 
    std::cout << "Eat jam..." << std::endl;
    delete wrappee;
}

void ToastWithJam::myIngredients(){
    std::cout << "I have jam." << std::endl;
    if (wrappee != NULL) {
        wrappee->myIngredients();
    }
}
