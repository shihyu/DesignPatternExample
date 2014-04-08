#include "EveningState.h"
#include <sstream>
#include <iostream>


namespace state {

void EveningState::writeProgram(Work *w) {
    if (w->isFinish()) {
        w->setState(new RestState());
        w->writeprogram();
    } else {
        if (w->getHour() < 21) {
            std::string s;
            std::stringstream ss;
            ss << w->getHour();
            ss >> s;
            std::cout << "the current time:" + s + " work overtime!how sad!" << std::endl;
        } else {
            w->setState(new SleepState());
            w->writeprogram();
        }
    }
}
}
