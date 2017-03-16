#ifndef POLISHTOAST_H
#define POLISHTOAST_H

#include "./ToastRecipe.cpp"

class PolishToast : public ToastRecipe {
public:
    PolishToast();
    PolishToast(const PolishToast& orig);
    virtual ~PolishToast();
    void putSomeIngredients();
    void putSomeSauce();
private:

};

#endif