#include <cstdlib>
#include <iostream>
#include <valarray>

#include "./Customer.cpp"
#include "./Waiter.cpp"
#include "./Cook.cpp"

using namespace std;

int main(int argc, char** argv) {
    
    std::cout << "This is observer pattern" << std::endl;
    std::cout << std::endl;
    
    Waiter* waiter = new Waiter();
    Cook* cook = new Cook();
    
    Customer* customer1 = new Customer("Hubert");
    Customer* customer2 = new Customer("Adam");
    Customer* customer3 = new Customer("John");
    
    waiter->takeOrder(customer1, "Polish Toast");
    waiter->takeOrder(customer1, "English Toast");
    
    waiter->takeOrder(customer2, "French Toast");
    waiter->takeOrder(customer2, "English Toast");
    
    waiter->takeOrder(customer3, "Polish Toast");
    waiter->takeOrder(customer3, "French Toast");
    
    cook->cookedToast(waiter, "Polish Toast");
    cook->cookedToast(waiter, "French Toast");
    cook->cookedToast(waiter, "English Toast");
    
    
    
    
    std::cout.flush();
    
    return 0;
}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Subject {
//    // 1. "independent" functionality
//    vector < class Observer * > views; // 3. Coupled only to "interface"
//    int value;
//  public:
//    void attach(Observer *obs) {
//        views.push_back(obs);
//    }
//    void setVal(int val) {
//        value = val;
//        notify();
//    }
//    int getVal() {
//        return value;
//    }
//    void notify();
//};
//
//class Observer {
//    // 2. "dependent" functionality
//    Subject *model;
//    int denom;
//  public:
//    Observer(Subject *mod, int div) {
//        model = mod;
//        denom = div;
//        // 4. Observers register themselves with the Subject
//        model->attach(this);
//    }
//    virtual void update() = 0;
//  protected:
//    Subject *getSubject() {
//        return model;
//    }
//    int getDivisor() {
//        return denom;
//    }
//};
//
//void Subject::notify() {
//  // 5. Publisher broadcasts
//  for (int i = 0; i < views.size(); i++)
//    views[i]->update();
//}
//
//class DivObserver: public Observer {
//  public:
//    DivObserver(Subject *mod, int div): Observer(mod, div){}
//    void update() {
//        // 6. "Pull" information of interest
//        int v = getSubject()->getVal(), d = getDivisor();
//        cout << v << " div " << d << " is " << v / d << '\n';
//    }
//};
//
//class ModObserver: public Observer {
//  public:
//    ModObserver(Subject *mod, int div): Observer(mod, div){}
//    void update() {
//        int v = getSubject()->getVal(), d = getDivisor();
//        cout << v << " mod " << d << " is " << v % d << '\n';
//    }
//};
//
//int main() {
//  Subject subj;
//  DivObserver divObs1(&subj, 4); // 7. Client configures the number and
//  DivObserver divObs2(&subj, 3); //    type of Observers
//  ModObserver modObs3(&subj, 3);
//  subj.setVal(14);
//}