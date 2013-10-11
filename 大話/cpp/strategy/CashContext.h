#pragma once

#include "CashSuper.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"
#include <string>

namespace strategy {

    class CashContext {
    private:
        CashSuper* cs;

    public:
        CashContext(std::string type);

        virtual CashSuper* getCs();

        virtual void setCs(CashSuper* cs);

        virtual double getCash(double money);
    };

}