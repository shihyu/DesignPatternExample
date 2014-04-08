#include "Person.h"
#include <iostream>

namespace decorator {

Person::Person() {
}

Person::Person(std::string name) {
    this->name = name;
}

void Person::show() {
    std::cout << " decorated guy " + this->name;
}

std::string Person::getName() {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}
}
