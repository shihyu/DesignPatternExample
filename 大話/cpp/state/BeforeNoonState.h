#pragma once

#include "State.h"
#include "Work.h"
#include "NoonState.h"

namespace state {

class BeforeNoonState : public State {

public:
    virtual void writeProgram(Work *w);

};

}