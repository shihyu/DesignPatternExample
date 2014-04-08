#include "USA.h"

namespace mediator {

USA::USA(UnionNations *un) : Country(un) {
}

void USA::declare(std::string message) {
    this->getUn()->declare(message, this);
}

void USA::getMessage(std::string message) {
    puts("USA has get the message: " + message);
}
}