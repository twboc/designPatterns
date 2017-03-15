#ifndef ENGLISHTOAST_H
#define ENGLISHTOAST_H

#include <iostream>
#include "./Toast.cpp"

class EnglishToast : public Toast {
public:
    EnglishToast();
    EnglishToast(const EnglishToast& orig);
    virtual ~EnglishToast();
    std::string getType();
    void rememberMe(ToastMemory* toastMemory);
private:
    std::string toastType;

};

#endif