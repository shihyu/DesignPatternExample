#pragma once

#include "Country.h"
#include <string>

namespace mediator {

    class UnionNations {

    public:
        virtual void declare(std::string message, Country* country) = 0;
    };

}