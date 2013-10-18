#include "NoonState.h"
#include "AfternoonState.h"
#include "Work.h"
#include <sstream>
#include <iostream>

namespace state {

    void NoonState::writeProgram(Work* w) {
        if (w->getHour() < 13) {
            std::string s;
            std::stringstream ss;
            ss << w->getHour();
            ss >> s;
            std::cout << "the current time:" + s + " fell tired ,want to sleep!" << std::endl;
        } else {
            w->setState(new AfternoonState());
            w->writeprogram();
        }
    }
}
