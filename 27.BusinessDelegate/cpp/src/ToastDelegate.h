#ifndef TOASTDELEGATE_H
#define TOASTDELEGATE_H

#include <iostream>
#include "./ToastLookup.cpp"
#include "./Toast.cpp"

class ToastDelegate {
public:
    ToastDelegate();
    ToastDelegate(const ToastDelegate& orig);
    virtual ~ToastDelegate();
    void setToastType(std::string toastType);
    void serveToast();
private:
    ToastLookup* taostLookup;
    Toast* toast;
    std::string toastType;
};

#endif