#pragma once
#ifndef SHAPE_H
#define SHAPE_H

class shape {
public:
    shape();
    shape(const shape& orig);
    virtual ~shape();
    virtual void draw() = 0;
private:

};

#endif

