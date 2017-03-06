#include "Toaster.h"

#include <iostream>
#include "./ToasterComponent.cpp"
Toaster::Toaster() { }
Toaster::Toaster(std::string name) {
    this->name = name;
}
Toaster::~Toaster() { }
