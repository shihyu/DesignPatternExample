#include "ProjectMannager.h"
#include <iostream>

namespace chainOfResponsibility {

void ProjectMannager::handleRequest(Request *que) {
    if (que->getType() == "leave") {
        std::cout << "PM  agree the leave request" << std::endl;
    } else {
        std::cout << "PM has no right to handle it, Pls ask help from Director!" << std::endl;
        this->getNextHandler()->handleRequest(que);
    }
}
}
