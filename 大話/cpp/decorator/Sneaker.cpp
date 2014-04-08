#include "Sneaker.h"
#include <iostream>

namespace decorator {

void Sneaker::show() {
    std::cout << " sneaker " << std::endl;
    Finery::show();
}
}
