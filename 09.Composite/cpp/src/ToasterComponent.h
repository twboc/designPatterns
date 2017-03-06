#ifndef TOASTERCOMPONENT_H
#define TOASTERCOMPONENT_H

#include <iostream>
#include <vector>

class ToasterComponent {
public:
    ToasterComponent();
    ToasterComponent(std::string name);
    virtual ~ToasterComponent();
    void addComponent(ToasterComponent* component);
    void componentAction();
    void printName();
protected:
    std::string name;
    std::vector<ToasterComponent*> components;

};

#endif