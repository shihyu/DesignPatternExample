#pragma once

#include "Country.h"
#include "UnionNations.h"
#include <string>

namespace mediator {

    class Iraq : public Country {

    public:
        Iraq(UnionNations* un);

        virtual void declare(std::string message);

        virtual void getMessage(std::string message);

    };

}