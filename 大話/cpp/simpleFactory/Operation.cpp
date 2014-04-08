#include "Operation.h"

namespace simpleFactory {

int Operation::getA() {
    return a;
}

void Operation::setA(int a) {
    this->a = a;
}

int Operation::getB() {
    return b;
}

void Operation::setB(int b) {
    this->b = b;
}

int Operation::getResult() {
    return 0;
}
}