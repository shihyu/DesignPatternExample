#include "BakeChickenWingCommand.h"

namespace command {

    BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer* bar) : Command(bar) {
    }

    void BakeChickenWingCommand::excuteCommand() {
        this->getBarbecuer()->bakeChickenWing();
    }
}