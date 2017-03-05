#ifndef PLUMTOAST_H
#define PLUMTOAST_H

#include "./Criteria.h"

class PlumToast : public Criteria {
public:
    PlumToast();
    PlumToast(const PlumToast& orig);
    virtual ~PlumToast();
    std::vector<Toast*> meetCriteria(std::vector<Toast*> toasts);
    
private:

};

#endif