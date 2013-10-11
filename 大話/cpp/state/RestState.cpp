#include "RestState.h"

namespace state {

    void RestState::writeProgram(Work* w) {
        puts("the current time:" + w->getHour() + " work finished,rest");
    }
}