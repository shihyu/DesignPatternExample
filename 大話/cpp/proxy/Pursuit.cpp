#include "Pursuit.h"
#include <iostream>

namespace proxy {

Pursuit::Pursuit(SchoolGirl *mm) {
    this->mm = mm;
}

void Pursuit::giveChocolate() {
    std::cout << mm->getName() + "give you a chocolate" << std::endl;
}

void Pursuit::giveDolls() {
    std::cout << mm->getName() + "give you a doll" << std::endl;
}

void Pursuit::giveFlowers() {
    std::cout << mm->getName() + "give you a Flower" << std::endl;
}
}
