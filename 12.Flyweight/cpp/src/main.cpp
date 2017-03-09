#include <cstdlib>
#include <iostream>

#include "./ToastFactory.cpp"
#include "Toast.h"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is flyweight pattern" << std::endl;
    
    ToastFactory* toastFactory = new ToastFactory();
    
    Toast* polishToast = toastFactory->getToast("Polish Toast");
    polishToast->whoAmI();
    
    Toast* anotherPolishToast = toastFactory->getToast("Polish Toast");
    anotherPolishToast->whoAmI();
    
    Toast* needMOARPolishToast = toastFactory->getToast("Polish Toast");
    needMOARPolishToast->whoAmI();
    
    Toast* frenchToast = toastFactory->getToast("French Toast");
    frenchToast->whoAmI();
    
    std::cout.flush();
    
    return 0;
}

