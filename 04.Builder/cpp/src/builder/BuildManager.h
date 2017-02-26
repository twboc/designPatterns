#pragma once
#ifndef TEST_H
#define TEST_H
#include "Builder.h"
#include "../car/Car.h"

class BuildManager {
public:
    BuildManager();
    BuildManager(const BuildManager& orig);
    virtual ~BuildManager();
    void setBuilder(Builder* builder);
    Car* buildCar();
private:
    Builder* _builder;
};

#endif
