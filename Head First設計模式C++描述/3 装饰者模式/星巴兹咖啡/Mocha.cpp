#include "Mocha.h"

Mocha::Mocha(Beverage* b) {
    beverage = b;
}

string Mocha::getDescription() {
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
    return .20 + beverage->cost();
}

Mocha::~Mocha(void) {
}
