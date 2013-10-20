#include "MotoMible.h"
#include <iostream>

namespace brige {

    MotoMible::MotoMible(std::string brand) : Mobile(brand) {
    }

    void MotoMible::run() {
        std::cout << "Moto Mobile: " << std::endl;
        this->getSoft()->run();
    }
}
