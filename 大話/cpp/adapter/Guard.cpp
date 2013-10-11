#include "Guard.h"

namespace adapter {

    Guard::Guard(std::string name) {
        this->setName(name);
    }

    void Guard::attrack() {
        puts(this->getName() + " attrack");
    }

    void Guard::defence() {
        puts(this->getName() + " defence");
    }
}