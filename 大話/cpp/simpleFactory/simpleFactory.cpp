#include <string>
#include <cstdlib>
#include <iostream>

class Operation {
protected:
    int a;
    int b;
public:
    virtual int getA();
    virtual void setA(int a);
    virtual int getB();
    virtual void setB(int b);

    virtual int getResult();
};

class OperationAdd : public Operation {
public:
    virtual int getResult();
};

class OperationFactory {
public:
    static Operation* createOperation(wchar_t operate);

};

class OperationSub : public Operation {
public:
    virtual int getResult();
};

int OperationAdd::getResult() {
    return a + b;
}

int OperationSub::getResult() {
    return a - b;
}

Operation* OperationFactory::createOperation(wchar_t operate) {
    Operation* oper = 0;

    switch (operate) {
    case '+':
        oper = new OperationAdd();
        break;

    case '-':
        oper = new OperationSub();
        break;
    }

    return oper;
}

int Operation::getA() {
    return a;
}

void Operation::setA(int a) {
    this->a = a;
}

int Operation::getB() {
    return b;
}

void Operation::setB(int b) {
    this->b = b;
}

int Operation::getResult() {
    return 0;
}

int main() {
    Operation* operAdd = OperationFactory::createOperation('+');
    Operation* operSub = OperationFactory::createOperation('-');
    operAdd->setA(11);
    operAdd->setB(22);
    //puts(operAdd->getResult());
    std::cout << operAdd->getResult() << std::endl;
    operSub->setA(11);
    operSub->setB(22);
    std::cout << operSub->getResult() << std::endl;
    return 0;
}
