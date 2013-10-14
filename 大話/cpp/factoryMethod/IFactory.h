#pragma once

#include "LeiFeng.h"

namespace factoryMethod {

    class IFactory {

    public:
        virtual LeiFeng* createLeiFeng() = 0;
    };

}
