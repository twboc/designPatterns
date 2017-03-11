#include "HeatUpTheToast.h"
HeatUpTheToast::HeatUpTheToast() {}
HeatUpTheToast::HeatUpTheToast(const HeatUpTheToast& orig) {}
HeatUpTheToast::~HeatUpTheToast() {}

void HeatUpTheToast::execute(Toast* toast){
    std::cout << "Heat up the toast!" << std::endl;
    toast->temperature = 40;
}
