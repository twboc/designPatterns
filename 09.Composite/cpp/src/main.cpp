#include <cstdlib>
#include <iostream>

#include "./ToasterComponent.h"
#include "./Toaster.cpp"
#include "./ToasterPart.cpp"


using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is the composite!" << std::endl;
    
    ToasterComponent* toaster = new Toaster("Big ol' toaster");
        
    ToasterComponent* radiator = new ToasterPart("used radiator");
    ToasterComponent* regulator = new ToasterPart("refubrished regulator");
    ToasterComponent* springMechanism = new ToasterPart("faulty spring mechanism");
    
    toaster->addComponent(radiator);
    toaster->addComponent(regulator);
    toaster->addComponent(springMechanism);
    
    ToasterComponent* heatSink = new ToasterPart("used heat sink");
    ToasterComponent* heatPaste = new ToasterPart("used heat paste");
    ToasterComponent* heatConductor = new ToasterPart("used heat conductor");
    
    
    // put the radiator parts into a composite
    radiator->addComponent(heatSink);
    radiator->addComponent(heatPaste);
    radiator->addComponent(heatConductor);
    
    ToasterComponent* refubrishedButton = new ToasterPart("refubrished button");
    ToasterComponent* refubrishedHandle = new ToasterPart("refubrished handle");
    ToasterComponent* refubrishedScrew = new ToasterPart("refubrished scre");
    
    // put the regulator parts into a composite
    radiator->addComponent(refubrishedButton);
    radiator->addComponent(refubrishedHandle);
    radiator->addComponent(refubrishedScrew);
    
    ToasterComponent* brokenSpring = new ToasterPart("faulty spring");
    ToasterComponent* brokenRail = new ToasterPart("faulty rail");
    ToasterComponent* brokenEjector = new ToasterPart("faulty ejector");
    
    // put the spring mechanism parts into a composite
    springMechanism->addComponent(brokenSpring);
    springMechanism->addComponent(brokenRail);
    springMechanism->addComponent(brokenEjector);
    
    
    //call the component actions on all components with composite pattern
    toaster->componentAction();
    

    return 0;
}

