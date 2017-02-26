#pragma once
#ifndef TRUCKCARBUILDER_H
#define TRUCKCARBUILDER_H
#include "Builder.h"
#include "../car/Body.h"
#include "../car/Engine.h"
#include "../car/Wheel.h"

class TruckCarBuilder : public Builder {
public:
    TruckCarBuilder();
    TruckCarBuilder(const TruckCarBuilder& orig);
    virtual ~TruckCarBuilder();
    Wheel* getWheel();
    Engine* getEngine();
    Body* getBody();
private:
    Wheel* _wheels;
    Body* _body;
    Engine* _engine;
};

#endif

