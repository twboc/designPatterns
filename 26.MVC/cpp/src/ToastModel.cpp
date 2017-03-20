#pragma once
#include "ToastModel.h"

ToastModel::ToastModel(std::string toastType) { 
    this->toastType = toastType;
    this->toastTemperature = 15;
    this->toastJam = "no jam";
}
ToastModel::ToastModel(const ToastModel& orig) { }
ToastModel::~ToastModel() { }

void ToastModel::setTemperature(int temp){
    this->toastTemperature = temp;
}

void ToastModel::setJam(std::string jam){
    this->toastJam = jam;
};

std::string ToastModel::getType(){
    return this->toastType;
};

int ToastModel::getTemperature(){
    return this->toastTemperature;
};

std::string ToastModel::getJam(){
    return this->toastJam;
};