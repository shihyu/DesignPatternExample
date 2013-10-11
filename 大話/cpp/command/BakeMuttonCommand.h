#pragma once

#include "Command.h"
#include "Barbecuer.h"

namespace command {

    class BakeMuttonCommand : public Command {

    public:
        BakeMuttonCommand(Barbecuer* bar);

        virtual void excuteCommand();

    };

}