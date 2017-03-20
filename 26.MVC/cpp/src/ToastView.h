#ifndef TOASTVIEW_H
#define TOASTVIEW_H

#include <iostream>

class ToastView {
public:
    ToastView();
    ToastView(const ToastView& orig);
    virtual ~ToastView();
    void getToastInfo(std::string toastType, int toastTemperature, std::string toastJam);
private:

};

#endif