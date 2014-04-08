#include "SleepState.h"
#include <sstream>
#include <iostream>

namespace state {

void SleepState::writeProgram(Work *w) {
    std::string s;
    std::stringstream ss;
    ss << w->getHour();
    ss >> s;
    std::cout << "the current time:" + s + "Sleeping!" << std::endl;
}
}
