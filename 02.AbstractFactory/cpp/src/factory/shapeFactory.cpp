#pragma once
#include "shapeFactory.h"
#include <iostream>
#include <string>
#include "../shape/shape.h" 
#include "../shape/circle.cpp" 
#include "../shape/square.cpp" 
#include "../shape/rectangle.cpp" 

shapeFactory::shapeFactory() {
}

shapeFactory::shapeFactory(const shapeFactory& orig) {
}

shapeFactory::~shapeFactory() {
}

shape* shapeFactory::getShape(std::string shapeChosen){
    
    std::cout << "Getting the shape from the factory." << std::endl;
    if (shapeChosen == "circle") {
        return new circle();
    }else if (shapeChosen == "square"){
        return new square();
    }else if (shapeChosen == "rectangle"){
        return new rectangle();
    }
    
}
