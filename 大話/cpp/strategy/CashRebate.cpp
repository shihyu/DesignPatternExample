#include "CashRebate.h"

namespace strategy {

    CashRebate::CashRebate(double rebate) {
        this->rebate = rebate;
    }

    double CashRebate::getRebate() {
        return rebate;
    }

    void CashRebate::setRebate(double rebate) {
        this->rebate = rebate;
    }

    double CashRebate::acceptCash(double money) {
        return money * rebate / 10;
    }
}