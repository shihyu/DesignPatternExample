#pragma once

#include "Player.h"
#include "Center.h"
#include <string>

namespace adapter {

class Translator : public Player {
public:
    Center *wjzf;

    Translator(std::string name);

    virtual void attrack();

    virtual void defence();
};

}