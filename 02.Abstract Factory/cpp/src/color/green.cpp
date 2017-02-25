#include "green.h"
#include "color.cpp"
#include <iostream>

green::green() { }
green::green(const green& orig) { }
green::~green() { }
void green::fill(){
    std::cout << "Paint it green!" << std::endl;
}
