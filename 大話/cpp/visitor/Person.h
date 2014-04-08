#pragma once

#include "Action.h"

namespace visitor {

class Person {
public:
    virtual void accept(Action *visitor) = 0;
};

}