#include "BreadToast.h"

BreadToast::BreadToast() {
    layer = 1;
}
BreadToast::BreadToast(const BreadToast& orig) {}
BreadToast::~BreadToast() {}

void BreadToast::setNextStep(ToastMaker* toastMaker){
    if (toastMaker->getLayer() >= layer) {
        nextToastMaker = toastMaker;
    }else{
        std::cout << "Next layer is a lower layer.... this toast makes no sense!!!" << std::endl;
        std::cout << "Next layer not ready...." << std::endl;
        std::cout << std::endl;
    }
};

void BreadToast::startMakingToast(int toastLayers){
    if (toastLayers >= layer) {
        std::cout << "I am making a bread toast!!!" << std::endl;
        if (nextToastMaker != NULL) {
            nextToastMaker->startMakingToast(toastLayers);
        }
    }
    std::cout << std::endl;
};

int BreadToast::getLayer(){
    return layer;
};