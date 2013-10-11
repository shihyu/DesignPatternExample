#pragma once

#include "Action.h"
#include "Man.h"
#include "Woman.h"

namespace visitor {

    class Fail : public Action {

    public:
        virtual void getManReflection(Man* m);

        virtual void getWomanReaction(Woman* w);

    };

}