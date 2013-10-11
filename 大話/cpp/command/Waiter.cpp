#include "Waiter.h"

namespace command {

    void Waiter::setOrder(Command* com) {
        orders.push_back(com);
        puts("add an order " + new Date());
    }

    void Waiter::cancelOrder(Command* com) {
        orders.remove(com);
        puts("Cancel the order " + new Date());
    }

    void Waiter::excute() {
        for (std::vector<Command*>::const_iterator c = orders.begin(); c != orders.end(); ++c) {
            (*c)->excuteCommand();
        }
    }
}