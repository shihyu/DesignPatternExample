#include "Stock1.h"
#include <iostream>

namespace facade {

void Stock1::buy() {
    std::cout << "Stock1 buy!" << std::endl;
}

void Stock1::sell() {
    std::cout << "Stock1 sell!" << std::endl;
}
}
