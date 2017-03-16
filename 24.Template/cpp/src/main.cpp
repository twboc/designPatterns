#include <cstdlib>
#include <iostream>

#include "./PolishToast.cpp"
#include "./FrenchToast.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is template pattern" << std::endl;
    std::cout.flush();
    std::cout << std::endl;
    
    std::cout << "POLSKI TOST: " << std::endl;
    PolishToast* polishToastRecipe = new PolishToast();
    polishToastRecipe->prepareToast();
    
    std::cout << std::endl;
    std::cout << "FRENCH TOAST: " << std::endl;
    FrenchToast* frenchToastRecipe = new FrenchToast();
    frenchToastRecipe->prepareToast();
    
    return 0;
}

