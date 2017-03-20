#ifndef CLIENT_H
#define CLIENT_H

#include "./ToastDelegate.cpp"

class Client {
public:
    Client(ToastDelegate* toastDelegate);
    Client(const Client& orig);
    virtual ~Client();
    void orderAndEat();
private:
    ToastDelegate* toastDelegate;
};

#endif