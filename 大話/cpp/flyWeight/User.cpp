#include "User.h"

namespace flyWeight {

User::User(std::string name) {
    this->name = name;
}

std::string User::getName() {
    return name;
}

void User::setName(std::string name) {
    this->name = name;
}
}