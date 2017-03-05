#ifndef GERMANTOAST_H
#define GERMANTOAST_H

#include "./GenericToast.h"

class GermanToast : public GenericToast {
public:
    GermanToast();
    GermanToast(const GermanToast& orig);
    virtual ~GermanToast();
    void makeToast(int height, int width, int thickness);
private:

};

#endif