#pragma once

#include "State.h"
#include "Work.h"
#include "RestState.h"
#include "SleepState.h"

namespace state {

    class EveningState : public State {

    public:
        virtual void writeProgram(Work* w);

    };

}