#include "PlumToast.h"

#include <vector>
#include "./../toast/Toast.h"

PlumToast::PlumToast() { }
PlumToast::PlumToast(const PlumToast& orig) { }
PlumToast::~PlumToast() { }

std::vector<Toast*> PlumToast::meetCriteria(std::vector<Toast*> toasts){
    std::vector<Toast*> jamToasts;
    for (int index = 0; index < toasts.size(); ++index){
        if (toasts[index]->getJamFlavor() == "Plum") {
            jamToasts.push_back(toasts[index]);
        }
    }
    return jamToasts;
};