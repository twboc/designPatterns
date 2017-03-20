#ifndef TOASTMODEL_H
#define TOASTMODEL_H

#include <iostream>

class ToastModel {
public:
    ToastModel(std::string toastType);
    ToastModel(const ToastModel& orig);
    virtual ~ToastModel();
    void setTemperature(int temp);
    void setJam(std::string jam);
    std::string getType();
    int getTemperature();
    std::string getJam();
private:
    std::string toastType;
    int toastTemperature;
    std::string toastJam;
};

#endif /* TOASTMODEL_H */

