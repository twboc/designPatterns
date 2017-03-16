#ifndef FATPOLISHTOAST_H
#define FATPOLISHTOAST_H

#include "./Toast.cpp"
#include <iostream>

class FatPolishToast : public Toast {
public:
    FatPolishToast();
    FatPolishToast(const FatPolishToast& orig);
    virtual ~FatPolishToast();
    void makeToast();
private:

};

#endif