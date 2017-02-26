#pragma once
#ifndef BODY_H
#define BODY_H
#include <iostream>

class Body {
public:
    Body();
    Body(const Body& orig);
    virtual ~Body();
    std::string setBodyType(std::string body);
    std::string getBodyType();
private:
    std::string bodyType;
};

#endif

