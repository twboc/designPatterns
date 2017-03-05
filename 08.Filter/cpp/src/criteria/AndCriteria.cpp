#include "AndCriteria.h"
#include "./Criteria.h"
#include "./../toast/Toast.h"

AndCriteria::~AndCriteria() { }

AndCriteria::AndCriteria(Criteria* initialCriteria, Criteria* additionalCriteria) { 
    this->initialCriteria = initialCriteria;
    this->additionalCriteria = additionalCriteria;
}

std::vector<Toast*> AndCriteria::meetCriteria(std::vector<Toast*> toasts){    
    std::vector<Toast*> setInitial = this->initialCriteria->meetCriteria(toasts);
    std::vector<Toast*> setCommon = this->additionalCriteria->meetCriteria(setInitial);
    return setCommon;
}
