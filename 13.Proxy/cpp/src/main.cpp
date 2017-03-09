#include <cstdlib>
#include <iostream>

#include "./TastyPolishToast.h"
#include "./ToastDispencer.cpp"

using namespace std;

int main(int argc, char** argv) {
    std::cout << "This is proxy" << std::endl;
    
    ToastDispencer* taostDispencer = new ToastDispencer();
    
    TastyPolishToast* firstToast = taostDispencer->makeMeAToast();
    TastyPolishToast* secondToast = taostDispencer->makeMeAToast();
    TastyPolishToast* thirdToast = taostDispencer->makeMeAToast();
    TastyPolishToast* MOARToast = taostDispencer->makeMeAToast();
    
    
    std::cout.flush();
    return 0;
}

