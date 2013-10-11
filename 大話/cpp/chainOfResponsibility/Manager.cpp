#include "Manager.h"

namespace chainOfResponsibility {

    void Manager::handleRequest(Request* que) {
        if (que->getType().equals("increase salary")) {
            puts("Manager  agree the salary increase request");
        } else {
            puts("Director has no right to handle it, Pls ask help from Manager!");
            this->getNextHandler()->handleRequest(que);
        }
    }
}