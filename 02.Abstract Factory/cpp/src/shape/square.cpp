#pragma once
#include "square.h"
#include <iostream>
#include "shape.cpp"

square::square() { }
square::square(const square& orig) { }
square::~square() { }

void square::draw(){
    std::cout << "Square drawing()" << std::endl;
}