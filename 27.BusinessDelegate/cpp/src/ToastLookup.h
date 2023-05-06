#ifndef TOASTLOOKUP_H
#define TOASTLOOKUP_H

#include "./Toast.cpp"
#include "./FrenchToast.cpp"
#include "./PolishToast.cpp"

class ToastLookup {
public:
    ToastLookup();
    ToastLookup(const ToastLookup& orig);
    virtual ~ToastLookup();
    Toast* getToast(std::string toastType);
private:

};

#endif