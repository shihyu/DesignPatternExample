#pragma once

#include "CashSuper.h"

namespace strategy {

    class CashNormal : public CashSuper {

    public:
        virtual double acceptCash(double money);

    };

}