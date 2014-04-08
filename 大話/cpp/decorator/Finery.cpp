#include "Finery.h"

namespace decorator {

void Finery::decorate(decorator::Person *component) {
    this->component = component;
}

void Finery::show() {
    if (component != 0) {
        component->show();
    }
}
}