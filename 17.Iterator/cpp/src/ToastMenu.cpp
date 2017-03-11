#include "ToastMenu.h"
#include "Iterator.cpp"

ToastMenu::ToastMenu() { 
    
    menu.push_back("Polish Toast TheBest");
    menu.push_back("French Toast");
    menu.push_back("Italian Toast");
    menu.push_back("MapleSyrup Toast");
    menu.push_back("WhippedCream Toast");
    menu.push_back("BrownSugar Toast");
}
ToastMenu::ToastMenu(const ToastMenu& orig) { }
ToastMenu::~ToastMenu() { }

Iterator* ToastMenu::getIterator(){
    return new Iterator(menu);
};
