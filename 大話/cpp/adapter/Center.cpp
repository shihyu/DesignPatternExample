#include "Center.h"

namespace adapter {

    Center::Center(std::string name) {
        this->setName(name);
    }

    void Center::jinggong() {
        puts(this->getName() + " jinggong");
    }

    void Center::fangshou() {
        puts(this->getName() + " fangshou");
    }
}