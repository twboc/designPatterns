#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class rectangle : public shape {
public:
    rectangle();
    rectangle(const rectangle& orig);
    virtual ~rectangle();
    void draw();
private:

};

#endif /* RECTANGLE_H */

