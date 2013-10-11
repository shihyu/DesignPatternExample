#include "MotoMible.h"

namespace brige {

    MotoMible::MotoMible(std::string brand) : Mobile(brand) {
    }

    void MotoMible::run() {
        puts("Moto Mobile: ");
        this->getSoft()->run();
    }
}