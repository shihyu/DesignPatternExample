#include "Barbecuer.h"
#include <iostream>

namespace command {

    void Barbecuer::bakeMutton() {
        std::cout << "Bake the mutton!" << std::endl;
    }

    void Barbecuer::bakeChickenWing() {
        std::cout << "Bake the chicken wing!" << std::endl;
    }
}
