#include "Center.h"
#include <iostream>

namespace adapter {

Center::Center(std::string name) {
    this->setName(name);
}

void Center::jinggong() {
    std::cout << this->getName() + std::string(" jinggong") << std::endl;
}

void Center::fangshou() {
    std::cout << this->getName() + std::string(" fangshou") << std::endl;
}
}
