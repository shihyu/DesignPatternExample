#include "ChicagoStyleCheesePizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza(void) {
    name = "Chicago Style Deep Fish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza(void) {
}

void ChicagoStyleCheesePizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
