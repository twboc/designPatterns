#ifndef TOASTER_H
#define TOASTER_H

#include "./ToasterComponent.h"
#include <iostream>
#include <vector>

class Toaster : public ToasterComponent {
public:
    Toaster();
    Toaster(std::string name);
    virtual ~Toaster();
private:
    
};

#endif /* TOASTER_H */

