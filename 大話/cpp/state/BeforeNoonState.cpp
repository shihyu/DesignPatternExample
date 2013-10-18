#include "BeforeNoonState.h"
#include <sstream>
#include <iostream>

namespace state {

    void BeforeNoonState::writeProgram(Work* w) {
        if (w->getHour() < 12) {
            std::string s;
            std::stringstream ss;
            ss << w->getHour();
            ss >> s;
            std::cout << "the current time:" + s + " work hardly!" << std::endl;
        } else {
            w->setState(new NoonState());
            w->writeprogram();
        }
    }
}
