#pragma once
#include "Car.h"
#include <iostream>
Car::Car() { }
Car::Car(const Car& orig) { }
Car::~Car() { }

void Car::specifications(){
    std::cout << "body: " << _body->getBodyType() << std::endl;
    std::cout << "engine: " << _engine->getEngineType() << std::endl;
    std::cout << "wheels: " << _wheels[0]->getWheelType() << std::endl;
}

