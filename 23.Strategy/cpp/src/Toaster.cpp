#include "Toaster.h"

Toaster::Toaster(Toast* toast) { 
    this->toastMaker = toast;
}
Toaster::Toaster(const Toaster& orig) { }
Toaster::~Toaster() { }

void Toaster::cook(){
    toastMaker->makeToast();
};