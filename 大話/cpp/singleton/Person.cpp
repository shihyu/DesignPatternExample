#include "Person.h"

namespace singleton {

    Person::Person(std::string name) {
        this->name = name;
    }

    Person* Person::createInstance() {
        if (child == 0) {
            child = new Person("lincoln");
        }

        return child;
    }

    std::string Person::getName() {
        return name;
    }

    void Person::setName(std::string name) {
        this->name = name;
    }
}