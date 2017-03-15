#ifndef TOASTMEMORY_H
#define TOASTMEMORY_H

#include <iostream>

class ToastMemory {
public:
    ToastMemory();
    ToastMemory(const ToastMemory& orig);
    virtual ~ToastMemory();
    void rememberToast(std::string toastName);
    std::string getMemory();
private:
    std::string memory;
};

#endif