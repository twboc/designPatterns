#pragma once
#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class square : public shape {
public:
    square();
    square(const square& orig);
    virtual ~square();
    void draw();
private:

};

#endif /* SQUARE_H */

