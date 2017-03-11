#include <cstdlib>
#include <iostream>

#include "./ToastMaker.h"
#include "./BreadToast.cpp"
#include "./ButterToast.cpp"
#include "./JamToast.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is chain of responsibility pattern" << std::endl;
    std::cout << std::endl;

    ToastMaker* toastMaker = new BreadToast();
    ToastMaker* butterToast = new ButterToast();
    ToastMaker* jamToast = new JamToast();
    
    toastMaker->setNextStep(butterToast);
    butterToast->setNextStep(jamToast);
    
    std::cout << "I WANT A STANDARD TOAST!!!" << std::endl;
    std::cout << std::endl;
    toastMaker->startMakingToast(1);
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "NOW MAKE ME A TOAST WITH BUTTER!!!" << std::endl;
    std::cout << std::endl;
    toastMaker->startMakingToast(2);
    std::cout << std::endl;
    std::cout << std::endl;
    
    std::cout << "DAMNNN!!! GET ME A FULL TOAST WITH BUTTER AND JAM!!!" << std::endl;
    std::cout << std::endl;
    toastMaker->startMakingToast(3);
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout.flush();
    
    return 0;
}

