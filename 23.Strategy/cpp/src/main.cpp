#include <cstdlib>
#include <iostream>

#include "./Toaster.cpp"
#include "./FatPolishToast.cpp"
#include "./FrenchToast.cpp"
#include "./EnglishToast.cpp"

using namespace std;

int main(int argc, char** argv) {

    std::cout << "This is strategy pattern" << std::endl;
    std::cout << std::endl;
    std::cout.flush();
    
    Toaster* toasterPolish = new Toaster(new FatPolishToast());
    Toaster* toasterFrench = new Toaster(new FrenchToast());
    Toaster* toasterEnglish = new Toaster(new EnglishToast());
    
    toasterPolish->cook();
    toasterFrench->cook();
    toasterEnglish->cook();
    
    return 0;
}

