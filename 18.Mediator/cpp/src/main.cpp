#include <cstdlib>
#include <iostream>

#include "./Customer.cpp"
#include "./ToastWaiter.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is mediator pattern" << std::endl;
    std::cout << std::endl;
    
    ToastWaiter* john = new ToastWaiter();
    ToastWaiter* mark = new ToastWaiter();
    
    Customer* Huey = new Customer();
    Customer* Dewey = new Customer();
    Customer* Louie = new Customer();   
    
    Huey->order("Polish Toast", *john);
    Huey->order("French Toast", *mark);
    Huey->order("Italian Toast", *john);
    
    Dewey->order("Polish Toast", *mark);
    Dewey->order("French Toast", *mark);
    Dewey->order("Italian Toast", *john);
    
    Louie->order("Polish Toast", *john);
    Louie->order("French Toast", *mark);
    Louie->order("Italian Toast", *mark);
    
    
    std::cout.flush();
    
    return 0;
}
