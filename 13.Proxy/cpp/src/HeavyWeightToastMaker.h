#ifndef HEAVYWEIGHTTOASTMAKER_H
#define HEAVYWEIGHTTOASTMAKER_H

#include <iostream>
#include "TastyPolishToast.cpp"

class HeavyWeightToastMaker {
public:
    HeavyWeightToastMaker();
    HeavyWeightToastMaker(const HeavyWeightToastMaker& orig);
    virtual ~HeavyWeightToastMaker();
    TastyPolishToast* makeMeAToast();
private:

};
#endif