#include "Manager.h"
#include <iostream>

namespace chainOfResponsibility {

    void Manager::handleRequest(Request* que) {
        if (que->getType() == "increase salary") {
            std::cout << "Manager  agree the salary increase request" << std::endl;
        } else {
            std::cout << "Director has no right to handle it, Pls ask help from Manager!" << std::endl;
            this->getNextHandler()->handleRequest(que);
        }
    }
}
