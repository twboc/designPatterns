#ifndef WAITER_H
#define WAITER_H

#include "./FatPolishToast.cpp"
#include "./FrenchToast.cpp"
#include "./SpanishToast.cpp"

class Waiter {
public:
    Waiter();
    Waiter(const Waiter& orig);
    virtual ~Waiter();
    void orderAndEatAllToasts();
    void orderAndEatFatPolishToast();
    void orderAndEatFrenchToast();
    void orderAndEatSpanishToast();
private:
    Toast* fatPolishToast;
    Toast* frenchToast;
    Toast* spanishToast;

};

#endif