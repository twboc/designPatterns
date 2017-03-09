#ifndef TOASTFACTORY_H
#define TOASTFACTORY_H

#include <iostream>
#include<map>
#include "Toast.h"
#include "./PolishToast.cpp"
#include "./FrenchToast.cpp"

class ToastFactory {
public:
    ToastFactory();
    ToastFactory(const ToastFactory& orig);
    virtual ~ToastFactory();
    Toast* getToast(std::string toastType);
private:
    std::map<std::string, Toast*> toastsReady;

};

#endif