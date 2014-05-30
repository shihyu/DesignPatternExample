#include "NYPizzaStore.h"

NYPizzaStore::NYPizzaStore(void) {
}

NYPizzaStore::~NYPizzaStore(void) {
}

Pizza* NYPizzaStore::createPizza(string item) {
    if (item == "cheese") {
        return new NYStyleCheesePizza;
    }
}
