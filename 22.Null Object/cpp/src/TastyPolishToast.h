#ifndef TAYSTPOLISHTOAST_H
#define TAYSTPOLISHTOAST_H

#include <iostream>
#include "./Toast.cpp"

class TastyPolishToast : public Toast {
public:
    TastyPolishToast();
    TastyPolishToast(const TastyPolishToast& orig);
    virtual ~TastyPolishToast();
    Toast* eat();
private:

};

#endif