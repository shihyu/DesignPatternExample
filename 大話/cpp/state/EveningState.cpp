#include "EveningState.h"

namespace state {

    void EveningState::writeProgram(Work* w) {
        if (w->isFinish()) {
            w->setState(new RestState());
            w->writeprogram();
        } else {
            if (w->getHour() < 21) {
                puts("the current time:" + w->getHour() + " work overtime!how sad!");
            } else {
                w->setState(new SleepState());
                w->writeprogram();
            }
        }
    }
}