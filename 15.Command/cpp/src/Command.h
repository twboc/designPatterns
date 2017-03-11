#ifndef COMMAND_H
#define COMMAND_H

#include "./Toast.h"

class Command {
public:
    virtual void execute(Toast* toast) = 0;
private:

};

#endif