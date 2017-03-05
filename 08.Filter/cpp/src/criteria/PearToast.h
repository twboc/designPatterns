#ifndef PEARTOAST_H
#define PEARTOAST_H

#include "./Criteria.h"


class PearToast : public Criteria {
public:
    PearToast();
    PearToast(const PearToast& orig);
    virtual ~PearToast();
    std::vector<Toast*> meetCriteria(std::vector<Toast*> toasts);
private:

};

#endif