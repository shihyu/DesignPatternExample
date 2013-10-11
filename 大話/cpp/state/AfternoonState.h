#pragma once

#include "State.h"
#include "Work.h"
#include "EveningState.h"

namespace state {

    class AfternoonState : public State {

    public:
        virtual void writeProgram(Work* w);

    };

}