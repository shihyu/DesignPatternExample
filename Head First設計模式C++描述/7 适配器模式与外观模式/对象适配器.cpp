/*适配器模式：将一个类的接口，转换成客户期望的另一个接口。适配器让原本接口不兼容的类可以合作无间*/

/*对象适配器：使用对象组合，以修改的接口包装被适配者*/

#include <iostream>

using namespace std;

//Duck类为适配目标(Target)
class Duck {
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
};

//具体鸭子(绿头鸭)
class MallardDuck : public Duck {
public:
    void quack() {
        cout << "Quack" << endl;
    }
    void fly() {
        cout << "I'm flying" << endl;
    }
};

//Turkey类为被适配者(Adaptee)
class Turkey {
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

//具体Turkey
class WildTurkey: public Turkey {
public:
    void gobble() {
        cout << "Gobble gobble" << endl;
    }
    void fly() {
        cout << "I'm flying a short distance" << endl;
    }
};

//适配器(Adapter)
class TurkeyAdapter: public Duck {
private:
    Turkey* turkey;
public:
    TurkeyAdapter(Turkey* tk) {
        turkey = tk;
    }

    // 实现目标接口
    void quack() {
        turkey->gobble();
    }

    void fly() {
        for (int i = 0; i < 5; i++) {
            turkey->fly();
        }
    }
};

//测试
void testDuck(Duck* duck) {
    duck->quack();
    duck->fly();
}

int main() {
    Duck* duck = new MallardDuck;

    WildTurkey* turkey = new WildTurkey;
    Duck* turkeyAdapter = new TurkeyAdapter(turkey);

    cout << "The Turkey says..." << endl;
    turkey->gobble();
    turkey->fly();

    cout << "\nThe Duck says..." << endl;
    testDuck(duck);

    cout << "\nThe TurkeyAdapter says..." << endl;
    testDuck(turkeyAdapter);

    delete turkeyAdapter;
    delete turkey;
    delete duck;

    return 0;
}
