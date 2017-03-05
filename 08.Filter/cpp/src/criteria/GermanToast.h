#ifndef GERMANTOAST_H
#define GERMANTOAST_H

#include "Criteria.h"

class GermanToast : public Criteria {
public:
    GermanToast();
    GermanToast(const GermanToast& orig);
    virtual ~GermanToast();
    std::vector<Toast*> meetCriteria(std::vector<Toast*> toasts);
private:

};

#endif