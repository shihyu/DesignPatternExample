#pragma once

#include "Expression.h"
#include <string>

namespace interpreter {

    class Scale : public Expression {

    public:
        virtual void excute(std::string key, double value);

    };

}