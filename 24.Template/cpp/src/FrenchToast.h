#ifndef FRENCHTOAST_H
#define FRENCHTOAST_H

#include "./ToastRecipe.cpp"

class FrenchToast : public ToastRecipe {
public:
    FrenchToast();
    FrenchToast(const FrenchToast& orig);
    virtual ~FrenchToast();
    void putSomeIngredients();
    void putSomeSauce();
private:

};

#endif