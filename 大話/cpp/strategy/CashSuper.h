#pragma once

namespace strategy {

    class CashSuper {

    public:
        virtual double acceptCash(double money) = 0;
    };

}