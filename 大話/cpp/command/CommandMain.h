#pragma once

#include "Barbecuer.h"
#include "BakeMuttonCommand.h"
#include "Command.h"
#include "BakeChickenWingCommand.h"
#include "Waiter.h"
#include <string>

namespace command {

class CommandMain {

    ///
    ///   * <param name="args"> </param>
    ///
    static void main(std::string args[]);

};

}