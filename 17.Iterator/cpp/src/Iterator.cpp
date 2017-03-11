#include "Iterator.h"
Iterator::Iterator(std::vector<std::string> menu){
    index = -1;
    iteratorMenu = menu;
}

bool Iterator::hasElements(){
    return iteratorMenu.size() > 0 ? true : false;
}

bool Iterator::isDone(){
    return index < (int)(iteratorMenu.size() - 1) ? true : false;
}

bool Iterator::isFirst(){
    return index >= 0 && index == 0 ? true : false;
}

std::string Iterator::first(){
    if(this->hasElements()) {
        return iteratorMenu[0];
    }
    return NULL;
}

std::string Iterator::last(){
    if(this->hasElements()) {
        return iteratorMenu[iteratorMenu.size() - 1];   
    }
    return NULL;
}

std::string Iterator::next(){
    if(this->hasElements() && this->isDone()) {
        index = index + 1;
        return iteratorMenu[index];
    }
    return "noting";
}

std::string Iterator::previous(){
    if(this->hasElements() && !this->isFirst()) {
        return iteratorMenu[--index];
    }
    return "noting";
}

std::string Iterator::currentItem(){
    if(this->hasElements()) {
        return iteratorMenu[index];
    }
}
