#ifndef TOASTER_H
#define TOASTER_H

#include "./Toast.cpp"

class Toaster {
public:
    Toaster(Toast* toast);
    Toaster(const Toaster& orig);
    virtual ~Toaster();
    void cook();
private:
    Toast* toastMaker;
};

#endif