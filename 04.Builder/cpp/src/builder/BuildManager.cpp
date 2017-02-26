#pragma once
#include "BuildManager.h"
#include <iostream>
#include "Builder.h"
#include "../car/Car.cpp"

BuildManager::BuildManager() {
    std::cout << "Instance of thest" << std::endl;
}
BuildManager::BuildManager(const BuildManager& orig) { }
BuildManager::~BuildManager() { }

void BuildManager::setBuilder(Builder* builder){
    std::cout << "Setting the builder" << std::endl;
    _builder = builder;    
};

Car* BuildManager::buildCar(){
    
    std::cout << "Building a car..." << std::endl;
    Car* car = new Car();

    car->_body = _builder->getBody();
    car->_engine = _builder->getEngine();
    
    car->_wheels[0] = _builder->getWheel();
    car->_wheels[1] = _builder->getWheel();
    car->_wheels[2] = _builder->getWheel();
    car->_wheels[3] = _builder->getWheel();

    return car;
}