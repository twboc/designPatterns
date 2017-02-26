#pragma once
#include "Body.h"
#include <iostream>

Body::Body() {}
Body::Body(const Body& orig) {}
Body::~Body() {}

std::string Body::setBodyType(std::string body){
    return bodyType = body;
};
std::string Body::getBodyType(){
    return bodyType;
};
