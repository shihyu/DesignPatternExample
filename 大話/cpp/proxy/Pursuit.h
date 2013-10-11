#pragma once

#include "GiveGift.h"
#include "SchoolGirl.h"

namespace proxy {

    class Pursuit : public GiveGift {
    public:
        SchoolGirl* mm;

        Pursuit(SchoolGirl* mm);

        virtual void giveChocolate();

        virtual void giveDolls();

        virtual void giveFlowers();

    };

}