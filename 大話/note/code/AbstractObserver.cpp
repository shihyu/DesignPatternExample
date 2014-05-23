 /* GOOD ：定義了一種對多的關係, 讓多個觀察物件(公司員工)同時監聽一個主題物件（秘書），主題物件狀態發生變化時，會通知所有的觀察者，使它們能夠更新自己。
  */

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class SecretaryBase;
//抽象觀察者
class CObserverBase {
protected:
    string name;
    SecretaryBase *sub;
public:
    CObserverBase(string strname, SecretaryBase *strsub) {
        name = strname;
        sub = strsub;
    }
    virtual void Update() = 0;
};

//具體的觀察者,看股票的
class StockObserver : public CObserverBase {
public:
    StockObserver(string strname, SecretaryBase *strsub) : CObserverBase(strname, strsub) {
    }
    virtual void Update();
};

//具體觀察者,看 NBA 的
class NBAObserver : public CObserverBase {
public:
    NBAObserver(string strname, SecretaryBase *strsub) : CObserverBase(strname, strsub) {
    }
    virtual void Update();
};

//抽象通知者
class SecretaryBase {
public:
    string action;
    vector<CObserverBase *> observers;
public:
    virtual void Attach(CObserverBase *observer) = 0;
    virtual void Notify() = 0;
};

//具體通知者
class Secretary : public SecretaryBase {
public:
    void Attach(CObserverBase *ob) {
        observers.push_back(ob);
    }
    void Notify() {
        vector<CObserverBase *>::iterator p = observers.begin();

        while (p != observers.end()) {
            (*p)->Update();
            p++;
        }
    }
};

void StockObserver::Update() {
    cout << name << ":" << sub->action << ",不要玩股票了,要開始工作了" << endl;
}

void NBAObserver::Update() {
    cout << name << ":" << sub->action << ",不要看 NBA 了,老闆來了" << endl;
}

// 用戶端:
int main() {
    SecretaryBase *p = new Secretary(); //創建觀察者
    //被觀察的對象
    CObserverBase *s1 = new NBAObserver("小李", p);
    CObserverBase *s2 = new StockObserver("小趙", p);
    //加入觀察佇列
    p->Attach(s1);
    p->Attach(s2);
    //事件
    p->action = "老闆來了";
    //通知
    p->Notify();
    return 0;
}

