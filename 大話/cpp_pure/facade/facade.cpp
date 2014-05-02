#include <string>
#include <iostream>

class Stock2 {
public:
    virtual void buy();

    virtual void sell();
};

class Stock1 {
public:
    virtual void buy();

    virtual void sell();
};

class Fund {
private:
    Stock1* s1;
    Stock2* s2;
public:
    Fund();

    virtual void method1();

    virtual void method2();
};

void Stock1::buy() {
    std::cout << "Stock1 buy!" << std::endl;
}

void Stock1::sell() {
    std::cout << "Stock1 sell!" << std::endl;
}

Fund::Fund() {
    s1 = new Stock1();
    s2 = new Stock2();
}

void Fund::method1() {
    std::cout << "method1: " << std::endl;
    s1->buy();
    s2->buy();
}

void Fund::method2() {
    std::cout << "method2: " << std::endl;
    s2->buy();
    s1->sell();
}

void Stock2::buy() {
    std::cout << "Stock2 buy!" << std::endl;
}

void Stock2::sell() {
    std::cout << "Stock2 sell!" << std::endl;
}

int main(void) {
    Fund* fund = new Fund();
    fund->method1();
    fund->method2();
    return 0;
}
