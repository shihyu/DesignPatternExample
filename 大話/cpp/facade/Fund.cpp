#include "Fund.h"

namespace facade {

    Fund::Fund() {
        s1 = new Stock1();
        s2 = new Stock2();
    }

    void Fund::method1() {
        puts("method1: ");
        s1->buy();
        s2->buy();
    }

    void Fund::method2() {
        puts("method2: ");
        s2->buy();
        s1->sell();
    }
}