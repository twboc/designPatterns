#ifndef RED_H
#define RED_H
#include "color.h"

class red : public color {
public:
    red();
    red(const red& orig);
    virtual ~red();
    void fill();
private:

};

#endif

