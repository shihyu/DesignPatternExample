#include "Iraq.h"

namespace mediator {

    Iraq::Iraq(UnionNations* un) : Country(un) {
    }

    void Iraq::declare(std::string message) {
        this->getUn()->declare(message, this);
    }

    void Iraq::getMessage(std::string message) {
        puts("Iraq has get the message: " + message);
    }
}