#include "Country.h"

namespace mediator {

Country::Country(UnionNations *un) {
    this->un = un;
}

UnionNations *Country::getUn() {
    return un;
}

void Country::setUn(UnionNations *un) {
    this->un = un;
}
}