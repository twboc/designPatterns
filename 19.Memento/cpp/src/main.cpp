#include <cstdlib>
#include <iostream>

#include "./AndroidsElectricSheep.cpp"
#include "./CafeOfBrokenDreams.cpp"
#include "./ToastMemories.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is memento pattern" << std::endl;
    std::cout << std::endl;
    
    AndroidsElectricSheep* sheeps = new AndroidsElectricSheep();
    
    CafeOfBrokenDreams* cafe = new CafeOfBrokenDreams();
    cafe->setToastServed("fallout toast");
    std::cout << cafe->getToastServed() << std::endl;
    sheeps->addSheep(cafe->rememberThisToast());
    cafe->setToastServed("blade runner toast");
    std::cout << cafe->getToastServed() << std::endl;
    sheeps->addSheep(cafe->rememberThisToast());
    cafe->setToastServed("alien toast");
    std::cout << cafe->getToastServed() << std::endl;
    sheeps->addSheep(cafe->rememberThisToast());
    
    std::cout << std::endl;
    std::cout << "What was the first thing???" << std::endl;
    
    cafe->getToastFromMemory(sheeps->getSheep(0));
    std::cout << cafe->getToastServed() << std::endl;
    
    
    
    std::cout.flush();
    
    return 0;
}
