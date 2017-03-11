#ifndef TOASTMAKER_H
#define TOASTMAKER_H

class ToastMaker {
public:
    virtual void setNextStep(ToastMaker* toastMaker) = 0;
    virtual void startMakingToast(int toastLayers) = 0;
    virtual int getLayer() = 0;
private:

};

#endif