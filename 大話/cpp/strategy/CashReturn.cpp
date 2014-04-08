#include "CashReturn.h"

namespace strategy {

CashReturn::CashReturn(double achieveNum, double returnNum) {
    this->achieveNum = achieveNum;
    this->returnNum = returnNum;
}

double CashReturn::acceptCash(double money) {
    if (money > achieveNum) {
        return money - floor(money / this->achieveNum) * returnNum;
    }

    return money;
}

double CashReturn::getAchieveNum() {
    return achieveNum;
}

void CashReturn::setAchieveNum(double achieveNum) {
    this->achieveNum = achieveNum;
}

double CashReturn::getReturnNum() {
    return returnNum;
}

void CashReturn::setReturnNum(double returnNum) {
    this->returnNum = returnNum;
}
}