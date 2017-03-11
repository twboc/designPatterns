#include "Toast.h"

Toast::Toast() {
    temperature = 20;
    hasJam = false;
    hasBlackBread = false;
    hasSugar = false;
}
Toast::Toast(const Toast& orig) { }
Toast::~Toast() { }

void Toast::whatToastAmI(){
    std::cout << "I am a toast!!!" << std::endl;
    std::cout << "Temperature: " << temperature << std::endl;
    if(hasJam){
        std::cout << "I have jam" << std::endl;
    }
    if(hasBlackBread){
        std::cout << "I have black bread" << std::endl;
    }
    if(hasSugar){
        std::cout << "I have sugar" << std::endl;
    }
}