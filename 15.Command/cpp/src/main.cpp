#include <cstdlib>
#include <iostream>

#include "./ToastCook.cpp"
#include "./Recipe.cpp"
#include "./Toast.h"
#include "./HeatUpTheToast.cpp"
#include "./UseBlackBread.cpp"
#include "./AddJam.cpp"
#include "./SprinkleWithSugar.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is command pattern" << std::endl;
    std::cout << std::endl;
    
    ToastCook* cook = new ToastCook();
    
    
    Recipe* sugarCoatedBlack = new Recipe();
    sugarCoatedBlack->addCommand(new UseBlackBread());
    sugarCoatedBlack->addCommand(new SprinkleWithSugar());
    
    std::cout << std::endl;
    std::cout << std::endl;
    Toast* sugarCoatedBlackToast = cook->cookMeThis(sugarCoatedBlack);
    sugarCoatedBlackToast->whatToastAmI();
    
    Recipe* fullPolishStrong = new Recipe();
    fullPolishStrong->addCommand(new UseBlackBread());
    fullPolishStrong->addCommand(new HeatUpTheToast());
    fullPolishStrong->addCommand(new AddJam());
    fullPolishStrong->addCommand(new SprinkleWithSugar());
    
    std::cout << std::endl;
    std::cout << std::endl;
    Toast* fullPolishStrongToast = cook->cookMeThis(fullPolishStrong);
    fullPolishStrongToast->whatToastAmI();
    
    
    
    


    std::cout.flush();
    
    return 0;
}

