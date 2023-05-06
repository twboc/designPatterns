#ifndef TOASTDISPENCER_H
#define TOASTDISPENCER_H

#include <stdlib.h>
#include "./BurnedToast.cpp"
#include "./TastyPolishToast.cpp"

class ToastDispencer {
public:
    ToastDispencer();
    ToastDispencer(const ToastDispencer& orig);
    virtual ~ToastDispencer();
    Toast* getToast();
private:
    
    bool randomBool() {
        return rand() % 2 == 1;
    }

};

#endif