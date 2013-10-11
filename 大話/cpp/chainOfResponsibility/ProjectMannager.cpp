#include "ProjectMannager.h"

namespace chainOfResponsibility {

    void ProjectMannager::handleRequest(Request* que) {
        if (que->getType().equals("leave")) {
            puts("PM  agree the leave request");
        } else {
            puts("PM has no right to handle it, Pls ask help from Director!");
            this->getNextHandler()->handleRequest(que);
        }
    }
}