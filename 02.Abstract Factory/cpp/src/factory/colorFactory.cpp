#pragma once
#include "colorFactory.h"
#include "../color/color.h" 
#include "../color/red.cpp" 
#include "../color/green.cpp" 
#include "../color/blue.cpp" 

colorFactory::colorFactory() {
}

colorFactory::colorFactory(const colorFactory& orig) {
}

colorFactory::~colorFactory() {
}

color* colorFactory::getColor(std::string colorChosen){
    
    std::cout << "Getting the color from the factory." << std::endl;
    if (colorChosen == "red") {
        return new red();
    }else if (colorChosen == "green"){
        return new green();
    }else if (colorChosen == "blue"){
        return new blue();
    }
    
}
