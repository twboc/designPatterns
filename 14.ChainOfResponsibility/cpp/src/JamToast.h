#ifndef JAMTOAST_H
#define JAMTOAST_H

#include "./ToastMaker.h"
#include <cstdlib>
#include <iostream>

class JamToast : public ToastMaker {
public:
    JamToast();
    JamToast(const JamToast& orig);
    virtual ~JamToast();
    void setNextStep(ToastMaker* toastMaker);
    void startMakingToast(int toastLayers);
    int getLayer();
private:
    ToastMaker* nextToastMaker = NULL;
    int layer;

};

#endif