#include <cstdlib>
#include <iostream>

#include "./Waiter.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is facade pattern" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Making my own toasts..." << std::endl;
    std::cout << std::endl;
    Toast* fatPolishToast = new FatPolishToast();
    fatPolishToast->eatToast();
    
    Toast* frenchToast = new FrenchToast();
    frenchToast->eatToast();
    
    Toast* spanishToast = new SpanishToast();
    spanishToast->eatToast();
    
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Waiter!!! Get mo some toasts here right now!!!" << std::endl;
    std::cout << std::endl;
    Waiter* waiter = new Waiter();
    
    waiter->orderAndEat();
    
    
    std::cout.flush();
    
    return 0;
}

