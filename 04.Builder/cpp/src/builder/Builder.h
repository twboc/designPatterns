#pragma once
#ifndef BUILDER_H
#define BUILDER_H
#include "../car/Body.h"
#include "../car/Engine.h"
#include "../car/Wheel.h"

class  Builder {
public:
    virtual Wheel* getWheel() = 0;
    virtual Engine* getEngine() = 0;
    virtual Body* getBody() = 0;
private:

};

#endif

