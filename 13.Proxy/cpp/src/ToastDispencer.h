#ifndef TOASTDISPENCER_H
#define TOASTDISPENCER_H

#include <cstdlib>
#include "./HeavyWeightToastMaker.cpp"

class ToastDispencer {
public:
    ToastDispencer();
    ToastDispencer(const ToastDispencer& orig);
    virtual ~ToastDispencer();
    TastyPolishToast* makeMeAToast();
private:
    HeavyWeightToastMaker* heatedToastMaker = NULL;

};

#endif