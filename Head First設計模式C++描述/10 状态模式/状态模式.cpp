/*状态模式：允许对象在内部状态改变时改变它的行为，对象看起来好像修改了它的类*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//State是所有状态的抽象基类，基类中的方法直接映射到糖果机上可能发生的动作
class State
{
public:
        virtual void insertQuarter() = 0;
        virtual void ejectQuarter() = 0;
        virtual void turnCrank() = 0;
        virtual void dispense() = 0;
};

//糖果机类完整定义
class GumballMachine
{
private:
        //所有状态
        State* soldOutState;
        State* noQuarterState;
        State* hasQuarterState;
        State* soldState;
        State* winnerState;

        //糖果机当前状态
        State* state;
        //糖果机糖果数
        int count;

        GumballMachine(const GumballMachine &); //禁止复制
        GumballMachine operator=(const GumballMachine &); //禁止赋值

public:
        GumballMachine(int numberGumballs);
        //动作委托给当前状态实现
        void insertQuarter();
        void ejectQuarter();
        void turnCrank();
        void setState(State* s);
        void releaseBall();
        //每一个状态的getter
        State* getSoldOutState();
        State* getNoQuarterState();
        State* getHasQuarterState();
        State* getSoldState();
        State* getWinnerState();

        int getCount();

        ~GumballMachine();
};

//各种具体状态类的定义
class NoQuarterState : public State
{
private:
        GumballMachine* gumballMachine;

public:
        //通过构造器得到糖果机的引用，然后把它记录在实例变量中
        NoQuarterState(GumballMachine *gm)
        {
                gumballMachine = gm;
        }
        //分别定义该状态下的糖果机动作
        void insertQuarter()
        {
                cout << "You inserted a quarter" << endl;
                gumballMachine->setState(gumballMachine->getHasQuarterState());
        }
        void ejectQuarter()
        {
                cout << "You haven't inserted a quarter" << endl;
        }
        void turnCrank()
        {
                cout << "You turned, but there's no quarter" << endl;
        }
        void dispense()
        {
                cout << "You need to pay first" << endl;
        }
};

class HasQuarterState : public State
{
private:
        GumballMachine* gumballMachine;

public:
        //通过构造器得到糖果机的引用，然后把它记录在实例变量中
        HasQuarterState(GumballMachine *gm)
        {
                gumballMachine = gm;
        }
        //分别定义该状态下的糖果机动作
        void insertQuarter()
        {
                cout << "You can't inserted another quarter" << endl;
        }
        void ejectQuarter()
        {
                cout << "Quarter returned" << endl;
                gumballMachine->setState(gumballMachine->getNoQuarterState());
        }
        void turnCrank()
        {
                cout << "You turned..." << endl;
                int winner = rand() % 10;
                //这里获奖条件和书上不同，目的是为了能多抽中几次
                if (winner > 5 && gumballMachine->getCount() > 1)
                        gumballMachine->setState(gumballMachine->getWinnerState());
                else
                        gumballMachine->setState(gumballMachine->getSoldState());
        }
        void dispense()
        {
                cout << "No gumball dispensed" << endl;
        }
};

class SoldState : public State
{
private:
        GumballMachine* gumballMachine;

public:
        //通过构造器得到糖果机的引用，然后把它记录在实例变量中
        SoldState(GumballMachine *gm)
        {
                gumballMachine = gm;
        }
        //分别定义该状态下的糖果机动作
        void insertQuarter()
        {
                cout << "Please wait, we're already giving you a gumball" << endl;
        }
        void ejectQuarter()
        {
                cout << "Sorry, you already turned the crank" << endl;
        }
        void turnCrank()
        {
                cout << "Turning twice doesn't get you another gumball!!" << endl;
        }
        void dispense()
        {
                gumballMachine->releaseBall();
                if (gumballMachine->getCount() > 0)
                        gumballMachine->setState(gumballMachine->getNoQuarterState());
                else
                        gumballMachine->setState(gumballMachine->getSoldOutState());
        }
};

class SoldOutState : public State
{
private:
        GumballMachine* gumballMachine;

public:
        //通过构造器得到糖果机的引用，然后把它记录在实例变量中
        SoldOutState(GumballMachine *gm)
        {
                gumballMachine = gm;
        }
        //分别定义该状态下的糖果机动作
        void insertQuarter()
        {
                cout << "You can't insert a quarter, the machine is sold out" << endl;
                gumballMachine->setState(gumballMachine->getHasQuarterState());
        }
        void ejectQuarter()
        {
                cout << "You can't eject, you haven't insert a quarter yet" << endl;
        }
        void turnCrank()
        {
                cout << "You turned, but there's no gumballs" << endl;
        }
        void dispense()
        {
                cout << "No gumball dispensed" << endl;
        }
};

class WinnerState : public State
{
private:
        GumballMachine* gumballMachine;

public:
        //通过构造器得到糖果机的引用，然后把它记录在实例变量中
        WinnerState(GumballMachine *gm)
        {
                gumballMachine = gm;
        }
        //分别定义该状态下的糖果机动作
        void insertQuarter()
        {
                cout << "Please wait, we're already giving you a gumball" << endl;
        }
        void ejectQuarter()
        {
                cout << "Sorry, you already turned the crank" << endl;
        }
        void turnCrank()
        {
                cout << "Turning twice doesn't get you another gumball!!" << endl;
        }
        void dispense()
        {
                cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
                gumballMachine->releaseBall();
                if (gumballMachine->getCount() == 0)
                {
                        gumballMachine->setState(gumballMachine->getSoldOutState());
                }
                else
                {
                        gumballMachine->releaseBall();
                        if (gumballMachine->getCount() > 0)
                        {
                                gumballMachine->setState(gumballMachine->getNoQuarterState());
                        }
                        else
                        {
                                cout << "Oops, out of gumballs!" << endl;
                                gumballMachine->setState(gumballMachine->getSoldOutState());
                        }
                }
        }
};

//糖果机成员函数定义，C++一个文件中出现多个相互依赖的类就是麻烦
GumballMachine::GumballMachine(int numberGumballs)
{
        //创建所有状态
        soldOutState = new SoldOutState(this);
        noQuarterState = new NoQuarterState(this);
        hasQuarterState = new HasQuarterState(this);
        soldState = new SoldState(this);
        winnerState = new WinnerState(this);

        count = numberGumballs;
        //状态初始化
        if (count > 0)
                state = noQuarterState;
        else
                state = soldOutState;
}
        //动作委托给当前状态实现
void GumballMachine::insertQuarter()
{
        state->insertQuarter();
}
void GumballMachine::ejectQuarter()
{
        state->ejectQuarter();
}
void GumballMachine::turnCrank()
{
        state->turnCrank();
        state->dispense();
}
void GumballMachine::setState(State* s)
{
        state = s;
}
void GumballMachine::releaseBall()
{
        cout << "A gumball comes rolling out the slot..." << endl;
        if (count != 0)
        {
                count--;
        }
}
        //每一个状态的getter
State* GumballMachine::getSoldOutState()
{
        return soldOutState;
}
State* GumballMachine::getNoQuarterState()
{
        return noQuarterState;
}
State* GumballMachine::getHasQuarterState()
{
        return hasQuarterState;
}
State* GumballMachine::getSoldState()
{
        return soldState;
}
State* GumballMachine::getWinnerState()
{
        return winnerState;
}

int GumballMachine::getCount()
{
        return count;
}

GumballMachine::~GumballMachine()
{
        delete soldOutState;
        delete noQuarterState;
        delete hasQuarterState;
        delete soldState;
        delete winnerState;
}

//测试
int main()
{
        GumballMachine gumballMachine(20);

        for (int i=0; i<10; i++)
        {
                gumballMachine.insertQuarter();
                gumballMachine.turnCrank();
        }

        return 0;
}


