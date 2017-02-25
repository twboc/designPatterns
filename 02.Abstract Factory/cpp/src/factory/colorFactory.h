#pragma once
#ifndef COLORFACTORY_H
#define COLORFACTORY_H
#include "../color/color.h" 
#include <string>

class colorFactory {
public:
    colorFactory();
    colorFactory(const colorFactory& orig);
    virtual ~colorFactory();
    color* getColor(std::string colorChosen);
private:

};

#endif

