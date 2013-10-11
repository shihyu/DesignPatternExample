#include "Director.h"

namespace chainOfResponsibility {

    void Director::handleRequest(Request* que) {
        if (que->getType().equals("finance")) {
            puts("Director  agree the finance request");
        } else {
            puts("Director has no right to handle it, Pls ask help from Manager!");
            this->getNextHandler()->handleRequest(que);
        }
    }
}