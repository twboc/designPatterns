#ifndef RECIPE_H
#define RECIPE_H

#include "./Command.h"

#include <vector>

class Recipe {
public:
    Recipe();
    Recipe(const Recipe& orig);
    virtual ~Recipe();
    void addCommand(Command* command);
    std::vector<Command*> getRecipe();
private:
    std::vector<Command*> stepsInRecipe;

};

#endif