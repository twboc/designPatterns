#include "ToastCook.h"
#include "./Toast.cpp"

ToastCook::ToastCook() { }
ToastCook::ToastCook(const ToastCook& orig) { }
ToastCook::~ToastCook() { }

Toast* ToastCook::cookMeThis(Recipe* recipe){
    Toast* toast = new Toast();
    std::vector<Command*> currentRecipe = recipe->getRecipe();
    for (int i = 0; i < currentRecipe.size(); i++) {
        std::cout << "Command executed: " << std::endl;
        currentRecipe[i]->execute(toast);
        std::cout << std::endl;
    }
    return toast;
};