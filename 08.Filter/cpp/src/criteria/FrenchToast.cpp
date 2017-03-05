#include "FrenchToast.h"

#include <vector>
#include "./../toast/Toast.h"

FrenchToast::FrenchToast() { }
FrenchToast::FrenchToast(const FrenchToast& orig) { }
FrenchToast::~FrenchToast() { }

std::vector<Toast*> FrenchToast::meetCriteria(std::vector<Toast*> toasts){
    std::vector<Toast*> frenchToasts;
    for (int index = 0; index < toasts.size(); ++index){
        if (toasts[index]->getToastType() == "French") {
            frenchToasts.push_back(toasts[index]);
        }
    }
    return frenchToasts;
}; 