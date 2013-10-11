#pragma once

#include "Mobile.h"
#include <string>

namespace brige {

    class MotoMible : public Mobile {

    public:
        MotoMible(std::string brand);

        virtual void run();

    };

}