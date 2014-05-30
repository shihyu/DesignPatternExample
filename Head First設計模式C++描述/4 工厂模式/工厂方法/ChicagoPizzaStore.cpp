#include "ChicagoPizzaStore.h"

ChicagoPizzaStore::ChicagoPizzaStore(void) {
}

ChicagoPizzaStore::~ChicagoPizzaStore(void) {
}

Pizza* ChicagoPizzaStore::createPizza(std::string type) {
    if (type == "cheese") {
        return new ChicagoStyleCheesePizza;
    }
}
