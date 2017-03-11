#include "UseBlackBread.h"

UseBlackBread::UseBlackBread() { }
UseBlackBread::UseBlackBread(const UseBlackBread& orig) { }
UseBlackBread::~UseBlackBread() { }

void UseBlackBread::execute(Toast* toast){
    std::cout << "Use Black Bread!" << std::endl;
    toast->hasBlackBread = true;
}