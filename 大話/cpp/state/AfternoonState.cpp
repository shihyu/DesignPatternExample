#include "AfternoonState.h"
#include <sstream>
#include <iostream>

namespace state {
void AfternoonState::writeProgram(Work *w) {
    if (w->getHour() < 17) {
        std::string s;
        std::stringstream ss;
        ss << w->getHour();
        ss >> s;
        std::cout <<  "the current time:" + s + "fell better now!" << std::endl;
    } else {
        w->setState(new EveningState());
        w->writeprogram();
    }
}
}
