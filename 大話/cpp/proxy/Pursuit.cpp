#include "Pursuit.h"

namespace proxy {

    Pursuit::Pursuit(SchoolGirl* mm) {
        this->mm = mm;
    }

    void Pursuit::giveChocolate() {
        puts(mm->getName() + "give you a chocolate");
    }

    void Pursuit::giveDolls() {
        puts(mm->getName() + "give you a doll");
    }

    void Pursuit::giveFlowers() {
        puts(mm->getName() + "give you a Flower");
    }
}