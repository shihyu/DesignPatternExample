#include "Hat.h"

namespace decorator {

    void Hat::show() {
        std::cout::put(" red hat ");
        Finery::show();
    }
}