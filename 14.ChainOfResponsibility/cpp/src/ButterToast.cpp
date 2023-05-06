#include "ButterToast.h"

ButterToast::ButterToast() {
    layer = 2;
}
ButterToast::ButterToast(const ButterToast& orig) {}
ButterToast::~ButterToast() {}

void ButterToast::setNextStep(ToastMaker* toastMaker){
    if (toastMaker->getLayer() >= layer) {
        nextToastMaker = toastMaker;
    }else{
        std::cout << "Next layer is a lower layer.... this toast makes no sense!!!" << std::endl;
        std::cout << "Next layer not ready...." << std::endl;
        std::cout << std::endl;
    }
};

void ButterToast::startMakingToast(int toastLayers){ 
    if (toastLayers >= layer) {
        std::cout << "Adding butter to the toast!!!" << std::endl;
        if (nextToastMaker != NULL) {
            nextToastMaker->startMakingToast(toastLayers);
        }
    }
    std::cout << std::endl;
};

int ButterToast::getLayer(){
    return layer;
};