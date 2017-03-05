#ifndef ORCRITERIA_H
#define ORCRITERIA_H

#include "./Criteria.h"
#include "./../toast/Toast.h"

class OrCriteria {
public:
    OrCriteria(Criteria* initialCriteria, Criteria* additionalCriteria);
    virtual ~OrCriteria();
    std::vector<Toast*> meetCriteria(std::vector<Toast*>);
private:
    Criteria* initialCriteria;
    Criteria* additionalCriteria;
};

#endif