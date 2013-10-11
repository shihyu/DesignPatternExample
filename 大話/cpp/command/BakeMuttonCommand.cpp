#include "BakeMuttonCommand.h"

namespace command {

    BakeMuttonCommand::BakeMuttonCommand(Barbecuer* bar) : Command(bar) {
    }

    void BakeMuttonCommand::excuteCommand() {
        this->getBarbecuer()->bakeMutton();
    }
}