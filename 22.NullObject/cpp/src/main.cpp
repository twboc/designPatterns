#include <cstdlib>
#include <iostream>

#include "./ToastDispencer.cpp"
#include "./Toast.h"

using namespace std;

int main(int argc, char** argv) {
     
    std::cout << "This is null object pattern" << std::endl;
    std::cout.flush();
    
    ToastDispencer* toastDispencer = new ToastDispencer();
    
    Toast*  toast1 = toastDispencer->getToast();
    Toast*  toast2= toastDispencer->getToast();
    Toast*  toast3 = toastDispencer->getToast();
    Toast*  toast4 = toastDispencer->getToast();
    Toast*  toast5 = toastDispencer->getToast();
    Toast*  toast6 = toastDispencer->getToast();
    
    toast1->eat();
    toast2->eat();
    toast3->eat();
    toast4->eat();
    toast5->eat();
    toast6->eat();   
    
    return 0;
}

