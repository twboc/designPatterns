#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class circle : public shape {
public:
    circle();
    circle(const circle& orig);
    virtual ~circle();
    void draw();
private:

};

#endif

