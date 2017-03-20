#include "Client.h"

Client::Client(ToastDelegate* toastDelegate) {
    this->toastDelegate = toastDelegate;

}
Client::Client(const Client& orig) { }
Client::~Client() { }

void Client::orderAndEat(){
    this->toastDelegate->serveToast();
};