#pragma once
#include "ToastRecipe.h"

ToastRecipe::ToastRecipe() { }
ToastRecipe::ToastRecipe(const ToastRecipe& orig) { }
ToastRecipe::~ToastRecipe() { }

void ToastRecipe::prepareToast(){
    useBread();
    heatTheToast();
    putSomeIngredients();
    coolDownTheToast();
    putSomeSauce();
};


void ToastRecipe::useBread(){
    std::cout << "01. Put the bread on the table" << std::endl;
};

void ToastRecipe::heatTheToast(){
    std::cout << "02. Heat the toast" << std::endl;
};

void ToastRecipe::coolDownTheToast(){
    std::cout << "04. Letting the toast cool down" << std::endl;
};