#include "SprinkleWithSugar.h"

SprinkleWithSugar::SprinkleWithSugar() { }
SprinkleWithSugar::SprinkleWithSugar(const SprinkleWithSugar& orig) { }
SprinkleWithSugar::~SprinkleWithSugar() { }

void SprinkleWithSugar::execute(Toast* toast){
    std::cout << "Add some sugar!" << std::endl;
    toast->hasSugar = true;
}