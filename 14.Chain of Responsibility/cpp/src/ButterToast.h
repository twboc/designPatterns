#ifndef BUTTERTOAST_H
#define BUTTERTOAST_H

#include "./ToastMaker.h"
#include <iostream>
#include <cstdlib>

class ButterToast : public ToastMaker {
public:
    ButterToast();
    ButterToast(const ButterToast& orig);
    virtual ~ButterToast();
    void setNextStep(ToastMaker* toastMaker);
    void startMakingToast(int toastLayers);
    int getLayer();
private:
    ToastMaker* nextToastMaker = NULL;
    int layer;
};

#endif