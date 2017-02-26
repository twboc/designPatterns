#include <cstdlib>
#include <iostream>
#include "singleton.h"

using namespace std;

int main(int argc, char** argv) {
    
    singleton* singleInstance = singleton::getInstance();
    singleton* sameInstance1 = singleton::getInstance();
    singleton* sameInstance2 = singleton::getInstance();
    std::flush(std::cout);

    return 0;
}

