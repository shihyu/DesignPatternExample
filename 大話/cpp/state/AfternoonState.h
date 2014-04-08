#ifndef _AFTERNOONSTATE_H_
#define _AFTERNOONSTATE_H_
#include "State.h"
#include "Work.h"
#include "EveningState.h"

namespace state {

class AfternoonState : public State {

public:
    virtual void writeProgram(Work *w);

};

}
#endif
