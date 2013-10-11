#pragma once

#include "State.h"
#include "Work.h"

namespace state {

    class RestState : public State {

    public:
        virtual void writeProgram(Work* w);

    };

}