#include "ToasterComponent.h"

#include <vector>
#include <iostream>

ToasterComponent::ToasterComponent(){}
ToasterComponent::ToasterComponent(std::string name) {
    this->name = name;
}
ToasterComponent::~ToasterComponent() { }

void ToasterComponent::addComponent(ToasterComponent* component){
    this->components.push_back(component);
}

void ToasterComponent::componentAction(){
    this->printName();
    
    for(std::vector<ToasterComponent*>::size_type i = 0; i != this->components.size(); i++) {
        this->components[i]->componentAction();
    }
}

void ToasterComponent::printName(){
    std::cout << this->name << std::endl;
};