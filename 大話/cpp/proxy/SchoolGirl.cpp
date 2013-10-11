#include "SchoolGirl.h"

namespace proxy {

    SchoolGirl::SchoolGirl() {
    }

    SchoolGirl::SchoolGirl(std::string name) {
        this->name = name;
    }

    std::string SchoolGirl::getName() {
        return name;
    }

    void SchoolGirl::setName(std::string name) {
        this->name = name;
    }
}