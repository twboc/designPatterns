#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

class Customer {
public:
    Customer(std::string name);
    Customer(const Customer& orig);
    virtual ~Customer();
    std::string getName();
private:
    std::string name;

};

#endif