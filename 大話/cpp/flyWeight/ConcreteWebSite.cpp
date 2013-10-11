#include "ConcreteWebSite.h"

namespace flyWeight {

    ConcreteWebSite::ConcreteWebSite(std::string name) {
        this->name = name;
    }

    void ConcreteWebSite::use(User* u) {
        puts("the type of Website: " + name + " user: " + u->getName());
    }

    std::string ConcreteWebSite::getName() {
        return name;
    }

    void ConcreteWebSite::setName(std::string name) {
        this->name = name;
    }
}