#pragma once

#include "State.h"
#include "Work.h"

namespace state {

    class SleepState : public State {

    public:
        virtual void writeProgram(Work* w);

    };

}