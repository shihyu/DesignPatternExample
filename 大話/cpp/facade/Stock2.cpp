#include "Stock2.h"
#include <iostream>

namespace facade {

    void Stock2::buy() {
        std::cout << "Stock2 buy!" << std::endl;
    }

    void Stock2::sell() {
        std::cout << "Stock2 sell!" << std::endl;
    }
}
