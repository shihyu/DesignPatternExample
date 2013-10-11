#pragma once

#include "Work.h"

namespace state {

    class State {

    public:
        virtual void writeProgram(Work* w) = 0;

    };

}