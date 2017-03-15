#include <cstdlib>
#include <iostream>

#include "./EnglishToast.cpp"
#include "./PolishToast.cpp"
#include "./ToastMemory.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is state pattern" << std::endl;
    std::cout.flush();
    
    ToastMemory* toastMemory = new ToastMemory();
    
    EnglishToast* englishToast = new EnglishToast();
    englishToast->rememberMe(toastMemory);
    std::cout << toastMemory->getMemory() << std::endl;
    
    PolishToast* polishToast = new PolishToast();
    polishToast->rememberMe(toastMemory);
    std::cout << toastMemory->getMemory() << std::endl;
    
    
    return 0;
}

