#pragma once

#include "Stock1.h"
#include "Stock2.h"

namespace facade {

    class Fund {

    private:
        Stock1* s1;
        Stock2* s2;
    public:
        Fund();

        virtual void method1();

        virtual void method2();

    };

}