#include "Toaster.h"
#include "../toasts/GenericToast.h"

Toaster::Toaster(int height, int width, int thickness, GenericToast* toast) {
    this->height = height;
    this->width = width;
    this->thickness = thickness;
    this->toastToMake = toast;
}
void Toaster::makeToast(){
    this->toastToMake->makeToast(this->height, this->width, this->thickness);
}
Toaster::~Toaster() { }

