#pragma once

#include "PlayContext.h"
#include <string>

namespace interpreter {

    class Expression {

    public:
        virtual void interpret(PlayContext* context);

        virtual void excute(std::string key, double value) = 0;

    };

}