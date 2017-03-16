#ifndef TOASTRECIPE_H
#define TOASTRECIPE_H

#include <iostream>

class ToastRecipe {
public:
    ToastRecipe();
    ToastRecipe(const ToastRecipe& orig);
    virtual ~ToastRecipe();
    void prepareToast();
    void useBread();
    void heatTheToast();
    virtual void putSomeIngredients() = 0;
    void coolDownTheToast();
    virtual void putSomeSauce() = 0;
private:
    

};

#endif