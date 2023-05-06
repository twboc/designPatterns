#include <cstdlib>
#include <iostream>
#include "./factory/shapeFactory.h"
#include "./shape/shape.h"

int main(int argc, char** argv) {
    
    shapeFactory* ShapeFactory = new shapeFactory();  

    shape* circle = ShapeFactory->getShape("circle");
    circle->draw();
    
    shape* square = ShapeFactory->getShape("square");
    square->draw();
    
    shape* rectangle = ShapeFactory->getShape("rectangle");
    rectangle->draw();
    
    std::cout << "This is factory method" << std::endl;
    std::cout.flush();
    
    return 0;
}

