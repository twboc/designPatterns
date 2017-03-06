#include <cstdlib>
#include <iostream>

#include "./Toast.cpp"
#include "./ToastBrownBread.cpp"
#include "./ToastWithButter.cpp"
#include "./ToastWithJam.cpp"
#include "./ToastWithSugar.cpp"

using namespace std;

int main(int argc, char** argv) {

    std::cout << "I am a decorator pattern!" << std:: endl;
    std::cout << std:: endl;
    std::cout << "Make me a fat Polish toast!" << std:: endl;
    std::cout << std:: endl;
    Toast* toastBrownBread = new ToastBrownBread();
    Toast* toastWithButter = new ToastWithButter(toastBrownBread);
    Toast* toastWithJam = new ToastWithJam(toastWithButter);
    Toast* toastWithSugar = new ToastWithSugar(toastWithJam);
    
    std::cout << "What ingredients do you have???" << std::endl;
    toastWithSugar->myIngredients();
    
    std::cout << std:: endl;
    std::cout << "Go on... EAT IT!!!" << std:: endl;
    std::cout << std:: endl;
    delete toastWithSugar;
    
    std::cout << std:: endl;
    std::cout << std:: endl;
    std::cout << "Make me a light American toast!" << std:: endl;
    std::cout << std:: endl;
    
    Toast* americanToast = new ToastWithSugar();
    std::cout << "What ingredients do you have???" << std::endl;
    americanToast->myIngredients();
    
    std::cout << std:: endl;
    std::cout << "Go on... EAT IT!!!" << std:: endl;
    std::cout << std:: endl;
    delete americanToast;
    
    std::cout << std:: endl;
    std::cout << std:: endl;
    std::cout << "Make me a tasty French toast!" << std:: endl;
    std::cout << std:: endl;
    
    Toast* frenchBread = new ToastBrownBread();
    Toast* frenchToast = new ToastWithJam(frenchBread);
    
    std::cout << "What ingredients do you have???" << std::endl;
    frenchToast->myIngredients();
    
    std::cout << std:: endl;
    std::cout << "Go on... EAT IT!!!" << std:: endl;
    std::cout << std:: endl;
    delete frenchToast;
    
    
    return 0;
}

