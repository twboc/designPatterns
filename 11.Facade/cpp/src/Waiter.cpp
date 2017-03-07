#include "Waiter.h"

Waiter::Waiter() {
    fatPolishToast = new FatPolishToast();
    frenchToast = new FrenchToast();
    spanishToast = new SpanishToast();
}
Waiter::Waiter(const Waiter& orig) { }
Waiter::~Waiter() { }

void Waiter::orderAndEatAllToasts(){
    fatPolishToast->eatToast();
    frenchToast->eatToast();
    spanishToast->eatToast();
};

void Waiter::orderAndEatFatPolishToast(){
    fatPolishToast->eatToast();
};
void Waiter::orderAndEatFrenchToast(){
    frenchToast->eatToast();
};
void Waiter::orderAndEatSpanishToast(){
    spanishToast->eatToast();
};