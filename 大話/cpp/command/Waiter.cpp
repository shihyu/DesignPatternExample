#include "Waiter.h"
#include <iostream>

namespace command {

void Waiter::setOrder(Command *com) {
    orders.push_back(com);
    std::cout << "add an order " + std::string(new Date()) << std::endl;
}

void Waiter::cancelOrder(Command *com) {
    orders.remove(com);
    std::cout << "Cancel the order " + std::string(new Date()) << std::endl;
}

void Waiter::excute() {
    for (std::vector<Command *>::const_iterator c = orders.begin(); c != orders.end(); ++c) {
        (*c)->excuteCommand();
    }
}
}
