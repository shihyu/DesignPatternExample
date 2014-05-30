/*模板方法模式：在一个方法中定义算法的骨架，而将一些步骤延迟到子类中。
模板方法使得子类可以在不改变算法结构的情况下，重新定义算法中的某些步骤。*/

#include <iostream>

using namespace std;

//咖啡因饮料是个抽象类
class CaffineBeverage {
public:
    //子类需要重定义的步骤
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    virtual void boilWater() {
        cout << "Boiling water" << endl;
    }
    virtual void pourInCup() {
        cout << "Pouring into cup" << endl;
    }
    //钩子(Hook), 子类决定是否要覆盖该方法
    virtual bool customerWantsCondiments() {
        return true;
    }

    //用同一个方法来处理茶和咖啡。prepareRecipe为非虚方法
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();

        if (customerWantsCondiments()) {
            addCondiments();
        }
    }
};

//子类重新定义步骤
class TeaWithHook: public CaffineBeverage {
public:
    void brew() {
        cout << "Steeping the tea" << endl;
    }
    void addCondiments() {
        cout << "Adding Lemon" << endl;
    }
    //覆盖钩子, 这里没有把getUserInput()像书上那样分离出来，因为C++的IO比java方便，不会增加太多代码行数
    bool customerWantsCondiments() {
        cout << "Would you like lemon with your coffee (y/n)? ";
        char answer;
        cin >> answer;

        if (answer == 'y' || answer == 'Y') {
            return true;
        } else {
            return false;
        }
    }
};

class CoffeeWithHook: public CaffineBeverage {
public:
    void brew() {
        cout << "Dripping Coffee through filter" << endl;
    }
    void addCondiments() {
        cout << "Adding Sugar and Milk" << endl;
    }
    //覆盖钩子
    bool customerWantsCondiments() {
        cout << "Would you like milk and sugar with your coffee (y/n)? ";
        char answer;
        cin >> answer;

        if (answer == 'y' || answer == 'Y') {
            return true;
        } else {
            return false;
        }
    }
};

//测试
int main() {
    TeaWithHook* teaHook = new TeaWithHook;
    CoffeeWithHook* coffeeHook = new CoffeeWithHook;

    cout << "\nMaking tea..." << endl;
    teaHook -> prepareRecipe();

    cout << "\nMaking coffee..." << endl;
    coffeeHook ->prepareRecipe();

    delete coffeeHook;
    delete teaHook;

    return 0;
}
