#include "Operation.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {

int Operation::getResult() {
    return result;
}

void Operation::setResult(int result) {
    this->result = result;
}

void Operation::add(int num) {
    //实现加法功能
    result += num;
}

void Operation::substract(int num) {
    //实现减法功能
    result -= num;
}
}
}
}
}
}
