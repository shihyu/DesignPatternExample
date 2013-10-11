#pragma once

#include "State.h"
#include "Work.h"
#include "AfternoonState.h"

namespace state {

    class NoonState : public State {

    public:
        virtual void writeProgram(Work* w);

    };

}