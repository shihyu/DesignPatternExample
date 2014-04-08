#include "TShirt.h"
#include <iostream>

namespace decorator {

void TShirt::show() {
    std::cout << " T-Shirt " << std::endl;
    Finery::show();
}
}
