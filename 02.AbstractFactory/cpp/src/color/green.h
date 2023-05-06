#ifndef GREEN_H
#define GREEN_H
#include "color.h"

class green : public color {
public:
    green();
    green(const green& orig);
    virtual ~green();
    void fill();
private:

};

#endif

