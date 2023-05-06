#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "../shape/shape.h" 
#include <string>

class shapeFactory {
public:
    shapeFactory();
    shapeFactory(const shapeFactory& orig);
    virtual ~shapeFactory();
    shape* getShape(std::string shapeChosen);
private:

};

#endif

