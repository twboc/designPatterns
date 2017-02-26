#pragma once
#include "TruckCarBuilder.h"
#include "Builder.h"
#include <iostream>
#include "../car/Body.h"
#include "../car/Engine.h"
#include "../car/Wheel.h"

TruckCarBuilder::TruckCarBuilder() { }
TruckCarBuilder::TruckCarBuilder(const TruckCarBuilder& orig) { }
TruckCarBuilder::~TruckCarBuilder() { }

Wheel* TruckCarBuilder::getWheel(){
    _wheels = new Wheel();
    _wheels->setWheelType("Advanced rubber wheel");
    return _wheels;
}
Engine* TruckCarBuilder::getEngine(){
    _engine = new Engine();
    _engine->setEngineType("Powerful V8 Engine");
    return _engine;
}
Body* TruckCarBuilder::getBody(){
    _body = new Body();
    _body->setBodyType("Sleek sport body");
    return _body;
}