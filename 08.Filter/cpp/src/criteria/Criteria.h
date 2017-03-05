#ifndef CRITERIA_H
#define CRITERIA_H

#include <vector>
#include "../toast/Toast.h"

class Criteria {
public:
    virtual std::vector<Toast*> meetCriteria(std::vector<Toast*> toasts) = 0;
private:

};

#endif