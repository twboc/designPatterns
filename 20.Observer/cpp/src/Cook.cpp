#include "Cook.h"

Cook::Cook() { }
Cook::Cook(const Cook& orig) { }
Cook::~Cook() { }
void Cook::cookedToast(Waiter* waiter, std::string toastType){
    waiter->takeDish(toastType);
};
