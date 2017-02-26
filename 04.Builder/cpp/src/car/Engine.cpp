#pragma once
#include "Engine.h"
#include <iostream>
Engine::Engine() { }
Engine::Engine(const Engine& orig) { }
Engine::~Engine() { }

std::string Engine::setEngineType(std::string engine){
    return engineType = engine;
};
std::string Engine::getEngineType(){
    return engineType;
};