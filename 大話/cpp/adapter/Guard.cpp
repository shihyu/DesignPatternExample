#include "Guard.h"
#include <iostream>

namespace adapter {

Guard::Guard(std::string name) {
    this->setName(name);
}

void Guard::attrack() {
    std::cout << this->getName() + std::string(" attrack") << std::endl;
}

void Guard::defence() {
    std::cout << this->getName() + std::string(" defence") << std::endl;
}
}
