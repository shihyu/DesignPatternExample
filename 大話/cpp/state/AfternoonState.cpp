#include "AfternoonState.h"

namespace state {

    void AfternoonState::writeProgram(Work* w) {
        if (w->getHour() < 17) {
            puts("the current time:" + w->getHour() + "fell better now!");
        } else {
            w->setState(new EveningState());
            w->writeprogram();
        }
    }
}