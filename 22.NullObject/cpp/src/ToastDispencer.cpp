#include "ToastDispencer.h"

ToastDispencer::ToastDispencer() { }
ToastDispencer::ToastDispencer(const ToastDispencer& orig) { }
ToastDispencer::~ToastDispencer() { }
Toast* ToastDispencer::getToast(){
    if(this->randomBool()){
        return new TastyPolishToast();
    }else{
        return new BurnedToast();
    }
};