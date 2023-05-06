#include "rectangle.h"
#include <iostream>
#include "shape.cpp"

rectangle::rectangle() { }

rectangle::rectangle(const rectangle& orig) { }

rectangle::~rectangle() { }

void rectangle::draw(){
    std::cout << "Rectangle drawing()" << std::endl;
}