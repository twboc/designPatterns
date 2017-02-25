#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "shapeFactory.h"
#include "colorFactory.h"

class abstractFactory {
public:
    abstractFactory();
    abstractFactory(const abstractFactory& orig);
    virtual ~abstractFactory();
    shapeFactory* getShapeFactory();
    colorFactory* getColorFactory();
private:

};

#endif

