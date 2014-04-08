#include "Fund.h"
#include <iostream>

namespace facade {

Fund::Fund() {
    s1 = new Stock1();
    s2 = new Stock2();
}

void Fund::method1() {
    std::cout << "method1: " << std::endl;
    s1->buy();
    s2->buy();
}

void Fund::method2() {
    std::cout << "method2: " << std::endl;
    s2->buy();
    s1->sell();
}
}
