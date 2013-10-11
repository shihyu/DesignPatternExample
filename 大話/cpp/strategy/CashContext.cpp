#include "CashContext.h"

namespace strategy {

    CashContext::CashContext(std::string type) {
        if (type.equals("normal")) {
            this->cs = new CashNormal();
        } else if (type.equals("debate")) {
            this->cs = new CashRebate(8.0);
        } else {
            this->cs = new CashReturn(300.0, 100.0);
        }
    }

    CashSuper* CashContext::getCs() {
        return cs;
    }

    void CashContext::setCs(CashSuper* cs) {
        this->cs = cs;
    }

    double CashContext::getCash(double money) {
        return this->cs->acceptCash(money);
    }
}