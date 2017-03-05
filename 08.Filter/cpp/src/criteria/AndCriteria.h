#ifndef ANDCRITERIA_H
#define ANDCRITERIA_H

#include "./Criteria.h"
#include "./../toast/Toast.h"

class AndCriteria : public Criteria {
public:
    AndCriteria(Criteria* initialCriteria, Criteria* additionalCriteria);
    virtual ~AndCriteria();
    std::vector<Toast*> meetCriteria(std::vector<Toast*>);
private:
    Criteria* initialCriteria;
    Criteria* additionalCriteria;
};

#endif