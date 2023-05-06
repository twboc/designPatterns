#include "red.h"
#include "color.cpp"
#include <iostream>

red::red() { }
red::red(const red& orig) { }
red::~red() { }
void red::fill(){
    std::cout << "Paint it red!" << std::endl;
}
