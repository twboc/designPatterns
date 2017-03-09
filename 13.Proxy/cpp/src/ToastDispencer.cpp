#include "ToastDispencer.h"

ToastDispencer::ToastDispencer() { }
ToastDispencer::ToastDispencer(const ToastDispencer& orig) { }
ToastDispencer::~ToastDispencer() { }

TastyPolishToast* ToastDispencer::makeMeAToast(){
    if (heatedToastMaker == NULL) {
        std::cout << "Wait a minute.... I have to heat up my toaster..." << std::endl;
        heatedToastMaker = new HeavyWeightToastMaker();
    }else{
        std::cout << "Toaster heated up and ready!!! GET SOME!!!" << std::endl;
    }
    return heatedToastMaker->makeMeAToast();
};
