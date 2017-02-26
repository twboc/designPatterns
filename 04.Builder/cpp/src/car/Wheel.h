#pragma once
#ifndef WHEEL_H
#define WHEEL_H
#include <iostream>

class Wheel {
public:
    Wheel();
    Wheel(const Wheel& orig);
    virtual ~Wheel();
    std::string setWheelType(std::string wheel);
    std::string getWheelType();
private:
    std::string wheelType;
};

#endif

