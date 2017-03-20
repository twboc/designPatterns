#pragma once
#include "ToastController.h"

ToastController::ToastController(ToastModel* model, ToastView* view) {
    this->model = model;
    this->view = view;
}
ToastController::ToastController(const ToastController& orig) { }
ToastController::~ToastController() { }

void ToastController::setTemperature(int temp){
    this->model->setTemperature(temp);
}

void ToastController::setJam(std::string jam){
    this->model->setJam(jam);
};
std::string ToastController::getType(){
    return this->model->getType();
}
int ToastController::getTemperature(){
    return this->model->getTemperature();
}
std::string ToastController::getJam(){
    return this->model->getJam();
};

void ToastController::updateView(){
    this->getType();
    this->getTemperature();
    this->getJam();
    this->view->getToastInfo(this->getType(), this->getTemperature(), this->getJam());
};