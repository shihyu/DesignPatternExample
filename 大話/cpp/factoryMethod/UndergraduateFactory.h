#pragma once

#include "IFactory.h"
#include "LeiFeng.h"
#include "Graduate.h"

namespace factoryMethod {

    class UndergraduateFactory : public IFactory {

    public:
        virtual LeiFeng* createLeiFeng();

    };

}