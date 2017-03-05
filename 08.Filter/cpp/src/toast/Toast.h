#ifndef TOAST_H
#define TOAST_H

#include <iostream>

class Toast {
public:
    Toast(std::string toastType, std::string breadType, std::string jamFlavor);
    virtual ~Toast();
    std::string getToastType();
    std::string getBreadType();
    std::string getJamFlavor();
    void show();
private:
    std::string toastType;
    std::string breadType;
    std::string jamFlavor;

};

#endif /* TOAST_H */

