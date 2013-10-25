#include "ConcreteWebSite.h"
#include <iostream>

namespace flyWeight {

    ConcreteWebSite::ConcreteWebSite(std::string name) {
        this->name = name;
    }

    void ConcreteWebSite::use(User* u) {
        std::cout << "the type of Website: " + name + " user: " + u->getName() << std::endl;
    }

    std::string ConcreteWebSite::getName() {
        return name;
    }

    void ConcreteWebSite::setName(std::string name) {
        this->name = name;
    }
}
