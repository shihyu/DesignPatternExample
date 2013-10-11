#include "NoonState.h"

namespace state {

    void NoonState::writeProgram(Work* w) {
        if (w->getHour() < 13) {
            puts("the current time:" + w->getHour() + " fell tired ,want to sleep!");
        } else {
            w->setState(new AfternoonState());
            w->writeprogram();
        }
    }
}