#ifndef TOAST_H
#define TOAST_H

#include <iostream>

class Toast {
public:
    Toast();
    Toast(const Toast& orig);
    virtual ~Toast();
    void whatToastAmI();
    int temperature;
    bool hasJam;
    bool hasBlackBread;
    bool hasSugar;
private:

};

#endif