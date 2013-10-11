#include "Man.h"

namespace visitor {

    void Man::accept(Action* visitor) {
        visitor->getManReflection(this);
    }
}