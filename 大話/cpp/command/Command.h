#pragma once

#include "Barbecuer.h"

namespace command {

class Command {

private:
    Barbecuer *barbecuer;
public:
    Command(Barbecuer *bar);

    virtual void excuteCommand() = 0;

    virtual Barbecuer *getBarbecuer();

    virtual void setBarbecuer(Barbecuer *barbecuer);
};

}