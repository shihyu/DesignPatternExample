#include "NokiaMobile.h"
#include <iostream>

namespace brige {

NokiaMobile::NokiaMobile(std::string brand) : Mobile(brand) {
}

void NokiaMobile::run() {
    std::cout << "Nokia Mobile: " << std::endl;
    this->getSoft()->run();
}
}
