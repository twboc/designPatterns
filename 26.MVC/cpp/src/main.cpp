#include <cstdlib>
#include <iostream>

#include "./ToastModel.cpp"
#include "./ToastView.cpp"
#include "./ToastController.cpp"

using namespace std;

int main(int argc, char** argv) {

    std::cout << "This is MVC pattern" << std::endl;
    std::cout << std::endl;
    std::cout.flush();
    
    ToastModel* toast = new ToastModel("Greatest Polish Toast");
    ToastView* view = new ToastView();
    
    ToastController* controller = new ToastController(toast, view);
    
    controller->updateView();
    std::cout << std::endl;
    
    controller->setJam("Amazing great strawberry jam");
    controller->setTemperature(25);
    
    controller->updateView();
    std::cout << std::endl;
    
    return 0;
}

