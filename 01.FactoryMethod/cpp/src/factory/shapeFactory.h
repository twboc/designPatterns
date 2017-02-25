#include <iostream>
#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

class shapeFactory {
public:
    shapeFactory();
    shapeFactory(const shapeFactory& orig);
    void getShape();
    virtual ~shapeFactory();
private:

};

#endif /* SHAPEFACTORY_H */

