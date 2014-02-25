#include "RestState.h"
#include <sstream>
#include <iostream>

namespace state {

    void RestState::writeProgram(Work* w) {
        std::string s;
        std::stringstream ss;
        ss << w->getHour();
        ss >> s;
        std::cout << "the current time:" + s + " work finished,rest" << std::endl;
    }
}
