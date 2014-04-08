#pragma once

#include "Command.h"
#include <vector>

namespace command {


class Waiter {

public:
    std::vector<Command *> orders;

    virtual void setOrder(Command *com);

    virtual void cancelOrder(Command *com);
    virtual void excute();

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            orders = std::vector<Command *>();
            initialized = true;
        }
    }

public:
    Waiter() {
        InitializeInstanceFields();
    }
};

}