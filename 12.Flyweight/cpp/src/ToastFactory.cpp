#include "ToastFactory.h"

ToastFactory::ToastFactory() { }
ToastFactory::ToastFactory(const ToastFactory& orig) { }
ToastFactory::~ToastFactory() { 

    
//    std::map<char, Toast*> toastsReady;
//    while(!characters_.empty())
//    {
//      map<char, Character*>::iterator it = characters_.begin();
//      delete it->second;
//      characters_.erase(it);
//    }

}

Toast* ToastFactory::getToast(std::string toastType){
    Toast* toast = NULL;
    std::cout << std::endl;
    std::cout << "Get ma a toast! => " << toastType << std::endl;
    if(toastsReady.find(toastType) != toastsReady.end()){
      toast = toastsReady[toastType];
      std::cout << "I have a toast ready!!!" << std::endl;
    }else{
        std::cout << "I'll make you a toast!!! Wait a minute..... " << std::endl;
        if (toastType == "Polish Toast") {
            toast = new PolishToast();
            toastsReady[toastType] = toast;
        }else if (toastType == "French Toast") {
            toast = new FrenchToast();
            toastsReady[toastType] = toast;
        }
    }
    std::cout << std::endl;
    return toast;
}