#pragma once

#include "Operation.h"

namespace simpleFactory {

    class OperationAdd : public Operation {
    public:
        virtual int getResult();
    };

}