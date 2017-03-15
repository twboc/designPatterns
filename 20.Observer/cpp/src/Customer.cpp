#pragma once
#include "Customer.h"

Customer::Customer(std::string name) {
    this->name = name;
}
std::string Customer::getName(){
    return this->name;
};
Customer::Customer(const Customer& orig) {}
Customer::~Customer() {}

