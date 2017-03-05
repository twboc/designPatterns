#ifndef TOASTER_H
#define TOASTER_H

#include "../toasts/GenericToast.h"

class Toaster {
public:
    Toaster(int height, int width, int thickness, GenericToast* toast);
    void makeToast();
    virtual ~Toaster();

private:

    int height;
    int width;
    int thickness;
    GenericToast* toastToMake;
};

#endif