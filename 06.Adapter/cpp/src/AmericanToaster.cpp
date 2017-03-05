#include "AmericanToaster.h"

AmericanToaster::AmericanToaster() { }
AmericanToaster::AmericanToaster(const AmericanToaster& orig) { }
AmericanToaster::~AmericanToaster() { }

void AmericanToaster::plugIn(AmericanSocketInterface* powerSource){
    power = powerSource;
}
void AmericanToaster::boil(){
    if (power->voltage() > 110){
        std::cout << "Toaster is burning like hell!!! Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn." << std::endl;
        return;
    }

    if (power->live() == 1 && power->neutral() == -1){
        std::cout << "Toast is ready!!! :D" << std::endl;
    }
}