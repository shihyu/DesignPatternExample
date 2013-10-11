#pragma once

#include "LeiFeng.h"

namespace factoryMethod {

    class IFactory {

    public:
        virtual public LeiFeng* createLeiFeng() = 0;
    };

}