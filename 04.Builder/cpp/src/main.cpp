#include <cstdlib>
#include <iostream>
#include "builder/BuildManager.h"
#include "builder/SportCarBuilder.h"
#include "builder/TruckCarBuilder.h"
#include "car/Car.h"

using namespace std;

int main(int argc, char** argv) {
  
    BuildManager* buildManager = new BuildManager();
    
    std::cout << "" << std::endl;
    buildManager->setBuilder(new SportCarBuilder());
    Car* ferrari = buildManager->buildCar();
    ferrari->specifications();    

    std::cout << "" << std::endl;
    buildManager->setBuilder(new TruckCarBuilder());
    Car* maan = buildManager->buildCar();
    maan->specifications();

    std::flush(std::cout);

    return 0;
}

