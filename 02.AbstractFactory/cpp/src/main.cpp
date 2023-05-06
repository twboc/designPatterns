#include <cstdlib>
#include <iostream>
#include "./factory/abstractFactory.h"
#include "./factory/shapeFactory.h"
#include "./factory/colorFactory.h"
#include "./shape/shape.h"
#include "./color/color.h"

using namespace std;

int main(int argc, char** argv) {
    
    abstractFactory* AbstractFactory = new abstractFactory();
    
    shapeFactory* ShapeFactory = AbstractFactory->getShapeFactory();  

    shape* circle = ShapeFactory->getShape("circle");
    circle->draw();
    
    shape* square = ShapeFactory->getShape("square");
    square->draw();
    
    shape* rectangle = ShapeFactory->getShape("rectangle");
    rectangle->draw();
    
    colorFactory* ColorFactory = AbstractFactory->getColorFactory();
    
    color* red = ColorFactory->getColor("red");
    red->fill();
    
    color* green = ColorFactory->getColor("green");
    green->fill();
    
    color* blue = ColorFactory->getColor("blue");
    blue->fill();
    
    std::cout << "This is factory method" << std::endl;
    std::cout.flush();
    
    return 0;
}

