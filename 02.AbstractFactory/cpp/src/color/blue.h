#ifndef BLUE_H
#define BLUE_H
#include "color.h"

class blue : public color {
public:
    blue();
    blue(const blue& orig);
    virtual ~blue();
    void fill();
private:

};

#endif

