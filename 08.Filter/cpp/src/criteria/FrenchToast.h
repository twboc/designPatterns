#ifndef FRENCHTOAST_H
#define FRENCHTOAST_H

#include "Criteria.h"

class FrenchToast : public Criteria {
public:
    FrenchToast();
    FrenchToast(const FrenchToast& orig);
    virtual ~FrenchToast();
    std::vector<Toast*> meetCriteria(std::vector<Toast*> toasts);
private:

};

#endif