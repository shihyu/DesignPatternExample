#pragma once

#include "Player.h"
#include <string>

namespace adapter {

class Guard : public Player {

public:
    Guard(std::string name);

    virtual void attrack();

    virtual void defence();
};

}