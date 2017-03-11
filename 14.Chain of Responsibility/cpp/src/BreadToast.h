#ifndef BREADTOAST_H
#define BREADTOAST_H

#include "./ToastMaker.h"
#include <iostream>
#include <cstdlib>

class BreadToast : public ToastMaker {
public:
    BreadToast();
    BreadToast(const BreadToast& orig);
    virtual ~BreadToast();
    void setNextStep(ToastMaker* toastMaker);
    void startMakingToast(int toastLayers);
    int getLayer();
private:
    ToastMaker* nextToastMaker = NULL;
    int layer;
};

#endif