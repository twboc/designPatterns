#ifndef TOASTMENU_H
#define TOASTMENU_H

#include <iostream>
#include <vector>
#include "./Iterator.h"

class ToastMenu {
public:
    ToastMenu();
    ToastMenu(const ToastMenu& orig);
    virtual ~ToastMenu();
    Iterator* getIterator();
private:
    
    std::vector<std::string> menu;

};

#endif