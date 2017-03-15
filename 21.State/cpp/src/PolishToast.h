#ifndef POLISHTOAST_H
#define POLISHTOAST_H

#include <iostream>
#include "./Toast.cpp"

class PolishToast : public Toast {
public:
    PolishToast();
    PolishToast(const PolishToast& orig);
    virtual ~PolishToast();
    std::string getType();
    void rememberMe(ToastMemory* toastMemory);
private:
    std::string toastType;
};

#endif