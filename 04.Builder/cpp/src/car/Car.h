#pragma once
#include "../car/Body.h"
#include "../car/Engine.h"
#include "../car/Wheel.h"

#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();
    Car(const Car& orig);
    virtual ~Car();
    Wheel* _wheels[4];
    Engine* _engine;
    Body* _body;
    void specifications();

};

#endif

