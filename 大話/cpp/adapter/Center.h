#pragma once

#include "Player.h"
#include <string>

namespace adapter {

    class Center : public Player {

    public:
        Center(std::string name);

        virtual void jinggong();

        virtual void fangshou();
    };

}