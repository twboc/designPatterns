#pragma once
#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
class Engine {
public:
    Engine();
    Engine(const Engine& orig);
    virtual ~Engine();
    std::string setEngineType(std::string engine);
    std::string getEngineType();
private:
    std::string engineType;
};

#endif

