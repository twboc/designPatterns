#ifndef ENGLISHTOAST_H
#define ENGLISHTOAST_H

#include "./Toast.h"
#include <iostream>

class EnglishToast : public Toast {
public:
    EnglishToast();
    EnglishToast(const EnglishToast& orig);
    virtual ~EnglishToast();
    void makeToast();
private:

};

#endif