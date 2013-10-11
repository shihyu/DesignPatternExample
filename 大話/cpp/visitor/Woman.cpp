#include "Woman.h"

namespace visitor {

    void Woman::accept(Action* visitor) {
        visitor->getWomanReaction(this);
    }
}