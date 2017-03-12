#include "AndroidsElectricSheep.h"

AndroidsElectricSheep::AndroidsElectricSheep() { }
AndroidsElectricSheep::AndroidsElectricSheep(const AndroidsElectricSheep& orig) { }
AndroidsElectricSheep::~AndroidsElectricSheep() { }

void AndroidsElectricSheep::addSheep(ToastMemories* memory){
    electricSheeps.push_back(memory);
};
ToastMemories* AndroidsElectricSheep::getSheep(int memoryIndex){
    return electricSheeps[memoryIndex];
};
