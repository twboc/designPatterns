#include "JamToast.h"
JamToast::JamToast() {
    layer = 3;
}
JamToast::JamToast(const JamToast& orig) {}
JamToast::~JamToast() {}

void JamToast::setNextStep(ToastMaker* toastMaker){
    if (toastMaker->getLayer() >= layer) {
        nextToastMaker = toastMaker;
    }else{
        std::cout << "Next layer is a lower layer.... this toast makes no sense!!!" << std::endl;
        std::cout << "Next layer not ready...." << std::endl;
        std::cout << std::endl;
    }
};

void JamToast::startMakingToast(int toastLayers){
    if (toastLayers >= layer) {
        std::cout << "Adding jam to the toast!!!" << std::endl;
        if (nextToastMaker != NULL) {
            nextToastMaker->startMakingToast(toastLayers);
        }
    }
    std::cout << std::endl;
};

int JamToast::getLayer(){
    return layer;
};