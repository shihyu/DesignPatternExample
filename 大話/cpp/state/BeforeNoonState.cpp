#include "BeforeNoonState.h"

namespace state {

    void BeforeNoonState::writeProgram(Work* w) {
        if (w->getHour() < 12) {
            puts("the current time:" + w->getHour() + " work hardly!");
        } else {
            w->setState(new NoonState());
            w->writeprogram();
        }
    }
}