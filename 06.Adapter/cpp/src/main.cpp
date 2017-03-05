#include <iostream>



#include "./sockets/ForcePlugEuropeanSocket.cpp"
#include "./sockets/Socket.cpp"
#include "./Adapter.cpp"
#include "./AmericanToaster.cpp"




using namespace std;

int main(int argc, char** argv){
    Socket* socket = new Socket;
    Adapter* adapter = new Adapter;
    AmericanToaster* toaster = new AmericanToaster();
    
    ForcePlugEuropeanSocket* forcedPlug = new ForcePlugEuropeanSocket();

    //try the toaster without adapting the voltage and the ground
    toaster->plugIn(forcedPlug);
    toaster->boil();
    
    //OK that escalated quickly
    //let us use the adapter now
    adapter->plugIn(socket);
    toaster->plugIn(adapter);

    toaster->boil();

    return 0;
}

