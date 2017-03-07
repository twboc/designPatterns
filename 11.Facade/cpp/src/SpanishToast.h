#ifndef SPANISHTOAST_H
#define SPANISHTOAST_H

#include "./Toast.h"
#include <iostream>

class SpanishToast : public Toast {
public:
    SpanishToast();
    SpanishToast(const SpanishToast& orig);
    virtual ~SpanishToast();
    void eatToast();
private:

};

#endif