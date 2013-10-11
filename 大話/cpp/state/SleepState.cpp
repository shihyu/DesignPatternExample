#include "SleepState.h"

namespace state {

    void SleepState::writeProgram(Work* w) {
        puts("the current time:" + w->getHour() + "Sleeping!");
    }
}