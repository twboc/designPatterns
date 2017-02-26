#pragma once
#include "SportCarBuilder.h"
#include "Builder.h"
#include <iostream>
#include "../car/Body.cpp"
#include "../car/Engine.cpp"
#include "../car/Wheel.cpp"

SportCarBuilder::SportCarBuilder() { }
SportCarBuilder::SportCarBuilder(const SportCarBuilder& orig) { }
SportCarBuilder::~SportCarBuilder() { }

Wheel* SportCarBuilder::getWheel(){
    _wheels = new Wheel();
    _wheels->setWheelType("Advanced rubber wheel");
    return _wheels;
}
Engine* SportCarBuilder::getEngine(){
    _engine = new Engine();
    _engine->setEngineType("Powerful V8 Engine");
    return _engine;
}
Body* SportCarBuilder::getBody(){
    _body = new Body();
    _body->setBodyType("Sleek sport body");
    return _body;
}