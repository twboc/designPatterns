#include "blue.h"
#include "color.cpp"
#include <iostream>

blue::blue() { }
blue::blue(const blue& orig) { }
blue::~blue() { }
void blue::fill(){
    std::cout << "Paint it blue!" << std::endl;
}
