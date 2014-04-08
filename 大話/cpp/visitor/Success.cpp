#include "Success.h"

namespace visitor {

void Success::getManReflection(Man *m) {
    puts("When a man succed , there will be a great women behind him! ");
}

void Success::getWomanReaction(Woman *w) {
    puts("When a woman succed , there will be a bad man behind him! ");
}
}