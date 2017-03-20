#ifndef TOASTCONTROLLER_H
#define TOASTCONTROLLER_H

#include "./ToastModel.cpp"
#include "./ToastView.cpp"

class ToastController {
public:
    ToastController(ToastModel* model, ToastView* view);
    ToastController(const ToastController& orig);
    virtual ~ToastController();
    void setTemperature(int temp);
    void setJam(std::string jam);
    int getTemperature();
    std::string getType();
    std::string getJam();
    void updateView();
private:
    ToastModel* model;
    ToastView* view;
};

#endif