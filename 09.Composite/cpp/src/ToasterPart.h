#ifndef TOASTERPART_H
#define TOASTERPART_H

#include "./Toaster.h"

class ToasterPart : public Toaster {
public:
    ToasterPart();
    ToasterPart(std::string name);
    virtual ~ToasterPart();
private:

};

#endif