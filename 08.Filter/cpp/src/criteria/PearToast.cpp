#include "PearToast.h"

#include <vector>
#include "./../toast/Toast.h"

PearToast::PearToast() { }
PearToast::PearToast(const PearToast& orig) { }
PearToast::~PearToast() { }

std::vector<Toast*> PearToast::meetCriteria(std::vector<Toast*> toasts){
    std::vector<Toast*> jamToasts;
    for (int index = 0; index < toasts.size(); ++index){
        if (toasts[index]->getJamFlavor() == "Pear") {
            jamToasts.push_back(toasts[index]);
        }
    }
    return jamToasts;
};