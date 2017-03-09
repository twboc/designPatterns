#include "HeavyWeightToastMaker.h"

HeavyWeightToastMaker::HeavyWeightToastMaker() {
    std::cout << "I am slowly heating up to start making you some toasts!!!" << std::endl;
}
HeavyWeightToastMaker::HeavyWeightToastMaker(const HeavyWeightToastMaker& orig) { }
HeavyWeightToastMaker::~HeavyWeightToastMaker() { }

TastyPolishToast* HeavyWeightToastMaker::makeMeAToast(){
    std::cout << "Making a toast" << std::endl;
    return new TastyPolishToast();    
};