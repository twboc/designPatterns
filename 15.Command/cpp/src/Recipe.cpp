#include "Recipe.h"

Recipe::Recipe() { }
Recipe::Recipe(const Recipe& orig) { }
Recipe::~Recipe() { }

void Recipe::addCommand(Command* command){
    stepsInRecipe.push_back(command);
};

std::vector<Command*> Recipe::getRecipe(){
    return stepsInRecipe;
};