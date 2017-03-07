#include "Waiter.h"

Waiter::Waiter() {
    fatPolishToast = new FatPolishToast();
    frenchToast = new FrenchToast();
    spanishToast = new SpanishToast();
}
Waiter::Waiter(const Waiter& orig) { }
Waiter::~Waiter() { }

void Waiter::orderAndEat(){
    fatPolishToast->eatToast();
    frenchToast->eatToast();
    spanishToast->eatToast();
};