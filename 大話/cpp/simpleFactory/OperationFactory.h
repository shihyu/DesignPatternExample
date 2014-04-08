#pragma once

#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"

namespace simpleFactory {

class OperationFactory {

public:
    static Operation *createOperation(wchar_t operate);

};

}