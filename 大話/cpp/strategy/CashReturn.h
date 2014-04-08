#pragma once

#include "CashSuper.h"
#include <cmath>

namespace strategy {

class CashReturn : public CashSuper {
private:
    double achieveNum;
    double returnNum;

public:
    CashReturn(double achieveNum, double returnNum);

    virtual double acceptCash(double money);

    virtual double getAchieveNum();

    virtual void setAchieveNum(double achieveNum);

    virtual double getReturnNum();

    virtual void setReturnNum(double returnNum);

};

}