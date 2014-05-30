#include "PizzaStore.h"

PizzaStore::PizzaStore(void) {
}

PizzaStore::~PizzaStore(void) {
}

Pizza* PizzaStore::orderPizza(string type) {
    Pizza* pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
