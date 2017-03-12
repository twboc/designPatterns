#ifndef TOASTMEMORIES_H
#define TOASTMEMORIES_H

#include <iostream>

class ToastMemories {
public:
    ToastMemories(std::string memory);
    ToastMemories(const ToastMemories& orig);
    virtual ~ToastMemories();
    std::string getMemory();
private:
    std::string memory;
};

#endif