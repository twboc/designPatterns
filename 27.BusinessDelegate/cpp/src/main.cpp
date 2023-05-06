#include <cstdlib>
#include <iostream>

#include "./ToastDelegate.cpp"
#include "./Client.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is Business Delegate" << std::endl;
    std::cout.flush();
    std::cout << std::endl;
    
    ToastDelegate* toastDelegate = new ToastDelegate();
    toastDelegate->setToastType("French Toast");
    
    Client* client = new Client(toastDelegate);
    client->orderAndEat();
    std::cout << std::endl;
    
    toastDelegate->setToastType("Polish Toast");
    client->orderAndEat();
    
    return 0;
}

