#pragma once

#include "CashSuper.h"

namespace strategy {

class CashRebate : public CashSuper {
private:
    double rebate;

public:
    CashRebate(double rebate);

    virtual double getRebate();

    virtual void setRebate(double rebate);

    virtual double acceptCash(double money);

};

}