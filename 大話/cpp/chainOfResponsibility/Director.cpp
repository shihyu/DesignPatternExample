#include "Director.h"
#include <iostream>

namespace chainOfResponsibility {

void Director::handleRequest(Request *que) {
    if (que->getType() == "finance") {
        std::cout << "Director  agree the finance request" << std::endl;
    } else {
        std::cout << "Director has no right to handle it, Pls ask help from Manager!" << std::endl;
        this->getNextHandler()->handleRequest(que);
    }
}
}
