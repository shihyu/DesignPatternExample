#include "Person.h"

namespace decorator {

    Person::Person() {
    }

    Person::Person(std::string name) {
        this->name = name;
    }

    void Person::show() {
        puts(" decorated guy " + this->name);
    }

    std::string Person::getName() {
        return name;
    }

    void Person::setName(std::string name) {
        this->name = name;
    }
}