#include "OperationFactory.h"

namespace simpleFactory {

    Operation* OperationFactory::createOperation(wchar_t operate) {
        Operation* oper = 0;

        switch (operate) {
        case '+':
            oper = new OperationAdd();
            break;

        case '-':
            oper = new OperationSub();
            break;
        }

        return oper;
    }
}