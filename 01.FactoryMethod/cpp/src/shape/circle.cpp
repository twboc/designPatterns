#include "circle.h"
#include <iostream>
#include "shape.cpp"

circle::circle() { }
circle::circle(const circle& orig) { }
circle::~circle() { }

void circle::draw(){
    std::cout << "Circle drawing()" << std::endl;
}