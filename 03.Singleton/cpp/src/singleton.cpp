#include "singleton.h"
#include <cstddef>
#include <iostream>

singleton* singleton::instance = NULL;
singleton* singleton::getInstance(){
   if (!instance) {
       instance = new singleton;
   }
   return instance;
}

singleton::singleton() {
    counter++;
    std::cout << "I have been instantiated only " << counter << " time." << std::endl;
}

singleton::singleton(const singleton& orig) { }
singleton::~singleton() { }

