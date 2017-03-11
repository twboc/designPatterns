#include <cstdlib>
#include <iostream>

#include "./ToastMenu.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is iterator pattern" << std::endl;
    std::cout << std::endl;
    
    ToastMenu* toastMenu = new ToastMenu();
    
    Iterator* menuOptions = toastMenu->getIterator();
    
    std::cout << "Start iterating" << std::endl;
    std::cout << std::endl;
    
    std::cout << menuOptions->hasElements() << std::endl;
    std::cout << menuOptions->isDone() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->next() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->previous() << std::endl;
    std::cout << menuOptions->last() << std::endl;

    std::cout.flush();
    
    return 0;
}