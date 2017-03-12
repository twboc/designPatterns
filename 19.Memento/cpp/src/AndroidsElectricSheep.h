#ifndef ANDROIDSELECTRICSHEEP_H
#define ANDROIDSELECTRICSHEEP_H

#include "./ToastMemories.h"
#include <iostream>
#include <vector>

class AndroidsElectricSheep {
public:
    AndroidsElectricSheep();
    AndroidsElectricSheep(const AndroidsElectricSheep& orig);
    virtual ~AndroidsElectricSheep();
    void addSheep(ToastMemories* memory);
    ToastMemories* getSheep(int memoryIndex);
private:
    std::vector<ToastMemories*> electricSheeps;

};

#endif /* ANDROIDSELECTRICSHEEP_H */

