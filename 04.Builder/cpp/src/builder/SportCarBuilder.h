#pragma once
#ifndef SPORTCARBUILDER_H
#define SPORTCARBUILDER_H
#include "Builder.h"
#include "../car/Body.h"
#include "../car/Engine.h"
#include "../car/Wheel.h"

class SportCarBuilder : public Builder {
public:
    SportCarBuilder();
    SportCarBuilder(const SportCarBuilder& orig);
    virtual ~SportCarBuilder();
    Wheel* getWheel();
    Engine* getEngine();
    Body* getBody();
private:
    Wheel* _wheels;
    Body* _body;
    Engine* _engine;
};

#endif

