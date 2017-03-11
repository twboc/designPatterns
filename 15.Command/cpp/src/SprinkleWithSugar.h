#ifndef SPRINKLEWITHSUGAR_H
#define SPRINKLEWITHSUGAR_H

#include <iostream>
#include "./Toast.h"
#include "./Command.h"

class SprinkleWithSugar : public Command {
public:
    SprinkleWithSugar();
    SprinkleWithSugar(const SprinkleWithSugar& orig);
    virtual ~SprinkleWithSugar();
    void execute(Toast* toast);
private:

};

#endif