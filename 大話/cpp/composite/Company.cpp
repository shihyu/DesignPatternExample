#include "Company.h"

namespace composite {

Company::Company(std::string name) {
    this->name = name;
}

std::string Company::getName() {
    return name;
}

void Company::setName(std::string name) {
    this->name = name;
}
}