#include "Command.h"

namespace command {

    Command::Command(Barbecuer* bar) {
        this->barbecuer = bar;
    }

    Barbecuer* Command::getBarbecuer() {
        return barbecuer;
    }

    void Command::setBarbecuer(Barbecuer* barbecuer) {
        this->barbecuer = barbecuer;
    }
}