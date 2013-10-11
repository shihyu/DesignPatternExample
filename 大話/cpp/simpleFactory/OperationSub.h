#pragma once

#include "Operation.h"

namespace simpleFactory {

    class OperationSub : public Operation {

    public:
        virtual int getResult();
    };

}