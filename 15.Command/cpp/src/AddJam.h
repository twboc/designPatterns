#ifndef ADDJAM_H
#define ADDJAM_H

#include <iostream>
#include "./Toast.h"
#include "./Command.h"

class AddJam : public Command {
public:
    AddJam();
    AddJam(const AddJam& orig);
    virtual ~AddJam();
    void execute(Toast* toast);
private:

};

#endif