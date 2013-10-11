#pragma once

#include "GiveGift.h"
#include "Pursuit.h"
#include "SchoolGirl.h"

namespace proxy {

    class Proxy : public GiveGift {
    public:
        Pursuit* gg;

        Proxy(SchoolGirl* mm);

        virtual void giveChocolate();

        virtual void giveDolls();

        virtual void giveFlowers();

    };

}