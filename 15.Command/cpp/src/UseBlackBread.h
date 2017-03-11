#ifndef USEBLACKBREAD_H
#define USEBLACKBREAD_H

#include <iostream>
#include "./Toast.h"
#include "./Command.h"

class UseBlackBread : public Command {
public:
    UseBlackBread();
    UseBlackBread(const UseBlackBread& orig);
    virtual ~UseBlackBread();
    void execute(Toast* toast);
private:

};

#endif