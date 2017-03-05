#include <cstdlib>
#include <iostream>

#include "./toasts/FrenchToast.cpp"
#include "./toasts/GermanToast.cpp"

#include "./toaster/Toaster.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    FrenchToast* frenchToast = new FrenchToast();
    GermanToast* germanToast = new GermanToast();
    
    Toaster* toasterForZiGermans = new Toaster(10, 10, 2, germanToast);
    toasterForZiGermans->makeToast();
    
    Toaster* toasterPurLeFrench = new Toaster(15, 15, 3, germanToast);
    toasterPurLeFrench->makeToast();
    
    
    std::cout << "This is bridge" << std::endl;
    std::cout.flush();
    
    return 0;
}

