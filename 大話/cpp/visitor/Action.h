#pragma once

#include "Man.h"
#include "Woman.h"

namespace visitor {

class Action {

public:
    virtual void getManReflection(Man *m) = 0;
    virtual void getWomanReaction(Woman *w) = 0;
};

}