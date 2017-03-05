#include "OrCriteria.h"

#include <algorithm>
#include "./Criteria.h"
#include "./../toast/Toast.h"

OrCriteria::OrCriteria(Criteria* initialCriteria, Criteria* additionalCriteria) {
    this->initialCriteria = initialCriteria;
    this->additionalCriteria = additionalCriteria;
}
OrCriteria::~OrCriteria() { }

std::vector<Toast*> OrCriteria::meetCriteria(std::vector<Toast*> toasts){  
    std::vector<Toast*> setPrimary = this->initialCriteria->meetCriteria(toasts);
    std::vector<Toast*> setSecondary = this->additionalCriteria->meetCriteria(toasts);
    for (int index = 0; index < setSecondary.size(); ++index){
        if( std::find(setPrimary.begin(), setPrimary.end(), setSecondary[index]) != setPrimary.end() ) {
        } else {
            setPrimary.push_back(setSecondary[index]);
        }
    }
    return setPrimary;
}