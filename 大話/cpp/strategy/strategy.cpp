#include <string>
#include <iostream>
#include <cmath>

class CashSuper {
public:
    virtual double acceptCash(double money) = 0;
};

class CashContext {
private:
    CashSuper *cs;

public:
    CashContext(std::string type);

    virtual CashSuper *getCs();

    virtual void setCs(CashSuper *cs);

    virtual double getCash(double money);
};

class CashRebate : public CashSuper {
private:
    double rebate;

public:
    CashRebate(double rebate);

    virtual double getRebate();

    virtual void setRebate(double rebate);

    virtual double acceptCash(double money);

};

class CashNormal : public CashSuper {
public:
    virtual double acceptCash(double money);

};

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

double CashNormal::acceptCash(double money) {
    return money;
}

CashContext::CashContext(std::string type) {
    if (type.compare("normal")) {
        this->cs = new CashNormal();
    } else if (type.compare("debate")) {
        this->cs = new CashRebate(8.0);
    } else {
        this->cs = new CashReturn(300.0, 100.0);
    }
}

CashSuper *CashContext::getCs() {
    return cs;
}

void CashContext::setCs(CashSuper *cs) {
    this->cs = cs;
}

double CashContext::getCash(double money) {
    return this->cs->acceptCash(money);
}


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

int main() {
    double price = 100.0;
    double num = 10;
    std::string s = "normal";
    CashContext *cc = new CashContext(s);
    std::cout << cc->getCash(price * num);
    return 0;
}

