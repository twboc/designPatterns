#include "GermanToast.h"

#include <vector>
#include "./../toast/Toast.h"

GermanToast::GermanToast() { }
GermanToast::GermanToast(const GermanToast& orig) { }
GermanToast::~GermanToast() { }

std::vector<Toast*> GermanToast::meetCriteria(std::vector<Toast*> toasts){
    std::vector<Toast*> germanToasts;
    for (int index = 0; index < toasts.size(); ++index){
        if (toasts[index]->getToastType() == "German") {
            germanToasts.push_back(toasts[index]);
        }
    }
    return germanToasts;
};