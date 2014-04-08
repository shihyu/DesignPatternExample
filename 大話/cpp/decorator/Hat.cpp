#include "Hat.h"
#include <iostream>

namespace decorator {

void Hat::show() {
    std::cout << " red hat " << std::endl;
    Finery::show();
}
}
