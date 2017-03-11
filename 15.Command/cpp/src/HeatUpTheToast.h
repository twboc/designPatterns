#ifndef HEATUPTHETOAST_H
#define HEATUPTHETOAST_H

#include <iostream>
#include "./Toast.h"
#include "./Command.h"

class HeatUpTheToast : public Command {
public:
    HeatUpTheToast();
    HeatUpTheToast(const HeatUpTheToast& orig);
    virtual ~HeatUpTheToast();
    void execute(Toast* toast);
private:

};

#endif