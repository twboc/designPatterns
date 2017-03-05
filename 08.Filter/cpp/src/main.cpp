#include <cstdlib>
#include <iostream>
#include <vector>

#include "./toast/Toast.cpp"
#include "./criteria/GermanToast.cpp"
#include "./criteria/FrenchToast.cpp"

#include "./criteria/PlumToast.cpp"
#include "./criteria/PearToast.cpp"

#include "./criteria/AndCriteria.cpp"
#include "./criteria/OrCriteria.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is filter" << std::endl;
        
    std::vector<Toast*> toastsWeWantToEat;

    toastsWeWantToEat.push_back(new Toast("German", "White", "Pear"));
    toastsWeWantToEat.push_back(new Toast("French", "Dark", "Plum"));
    toastsWeWantToEat.push_back(new Toast("French", "White", "Pear"));
    toastsWeWantToEat.push_back(new Toast("German", "White", "Pear"));
    toastsWeWantToEat.push_back(new Toast("German", "Dark", "Pear"));
    toastsWeWantToEat.push_back(new Toast("French", "Dark", "Plum"));
    toastsWeWantToEat.push_back(new Toast("German", "White", "Plum"));
    toastsWeWantToEat.push_back(new Toast("French", "White", "Plum"));
    
    
    GermanToast* germanToast = new GermanToast();
    germanToast->meetCriteria(toastsWeWantToEat);
    
    FrenchToast* frenchToast = new FrenchToast();
    frenchToast->meetCriteria(toastsWeWantToEat);
    
    PlumToast* plumToast = new PlumToast();
    plumToast->meetCriteria(toastsWeWantToEat);
    
    PearToast* pearToast = new PearToast();
    pearToast->meetCriteria(toastsWeWantToEat);
    
    std::cout << "This is AND set" << std::endl;
    
    std::vector<Toast*> andSet;
    AndCriteria* andCriteria = new AndCriteria(frenchToast, pearToast);
    andSet = andCriteria->meetCriteria(toastsWeWantToEat);
    
    for (int index = 0; index < andSet.size(); ++index){
        andSet[index]->show();
    }
    
    std::cout << "This is OR set" << std::endl;
    
    std::vector<Toast*> orSet;
    OrCriteria* orCriteria = new OrCriteria(frenchToast, pearToast);
    orSet = orCriteria->meetCriteria(toastsWeWantToEat);
    
    for (int index = 0; index < orSet.size(); ++index){
        orSet[index]->show();
    }
    
    std::cout.flush();
    
    return 0;
}

