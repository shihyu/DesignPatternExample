#include "Fail.h"

namespace visitor {

void Fail::getManReflection(Man *m) {
    puts("When a man failed , they will be driken ");
}

void Fail::getWomanReaction(Woman *w) {
    puts("When a woman failed , they will crying! ");
}
}