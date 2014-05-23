/* GOOD：用一個仲介物件來封裝一系列的物件交互，仲介者使各物件不需要顯示
 * 的相互引用，從而降低耦合；而且可以獨立地改變它們之間的交互。
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Colleague;
//仲介者類
class Mediator {
public:
    virtual void Send(string message, Colleague *col) = 0;
};

//抽象同事類
class Colleague {
protected:
    Mediator *mediator;
public:
    Colleague(Mediator *temp) {
        mediator = temp;
    }
};

//同事一
class Colleague1 : public Colleague {
public:
    Colleague1(Mediator *media) : Colleague(media) {}
    void Send(string strMessage) {
        mediator->Send(strMessage, this);
    }
    void Notify(string strMessage) {
        cout << "同事一獲得了消息" << strMessage << endl;
    }
};

//同事二
class Colleague2 : public Colleague {
public:
    Colleague2(Mediator *media) : Colleague(media) {}
    void Send(string strMessage) {
        mediator->Send(strMessage, this);
    }
    void Notify(string strMessage) {
        cout << "同事二獲得了消息" << strMessage << endl;
    }
};

//具體仲介者類
class ConcreteMediator : public Mediator {
public:
    Colleague1 *col1;
    Colleague2 *col2;
    virtual void Send(string message, Colleague *col) {
        if (col == col1) {
            col2->Notify(message);
        } else {
            col1->Notify(message);
        }
    }
};

//用戶端:
int main() {
    ConcreteMediator *m = new ConcreteMediator();
    //讓同事認識仲介
    Colleague1 *col1 = new Colleague1(m);
    Colleague2 *col2 = new Colleague2(m);
    //讓仲介認識具體的同事類
    m->col1 = col1;
    m->col2 = col2;
    col1->Send("吃飯了嗎?");
    col2->Send("還沒吃,你請嗎?");
    return 0;
}
