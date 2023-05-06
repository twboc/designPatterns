#include "abstractFactory.h"
#include "shapeFactory.cpp"
#include "colorFactory.cpp"

abstractFactory::abstractFactory() { }
abstractFactory::abstractFactory(const abstractFactory& orig) { }
abstractFactory::~abstractFactory() { }
shapeFactory* abstractFactory::getShapeFactory(){
    return new shapeFactory;
}
colorFactory* abstractFactory::getColorFactory(){
    return new colorFactory;
}
