#pragma once

#include "Command.h"
#include "Barbecuer.h"

namespace command {

    class BakeChickenWingCommand : public Command {

    public:
        BakeChickenWingCommand(Barbecuer* bar);

        virtual void excuteCommand();

    };

}