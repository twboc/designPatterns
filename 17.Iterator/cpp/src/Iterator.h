#ifndef ITERATOR_H
#define ITERATOR_H

#include <cstdlib>
#include <iostream>
#include <vector>

class Iterator {

private:
    int index;  
    std::vector<std::string> iteratorMenu;
public: 
    Iterator(std::vector<std::string> menu);
    bool hasElements();
    bool isDone();
    bool isFirst();
    std::string first();
    std::string last();
    std::string next();
    std::string previous();
    std::string currentItem();

};

#endif