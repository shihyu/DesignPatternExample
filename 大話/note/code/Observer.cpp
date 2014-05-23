/* GOOD ：定義了一種對多的關係, 讓多個觀察物件(公司員工)同時監聽一個主題物件（秘書），主題物件狀態發生變化時，會通知所有的觀察者，使它們能夠更新自己。
 */

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Secretary;
//看股票的同事類(觀察對象,觀察者)
class StockObserver {
private:
    string name;
    Secretary *sub;
public:
    StockObserver(string strname, Secretary *strsub) {
        name = strname;
        sub = strsub;
    }
    void Update();
};

//秘書類(主題物件,通知者)
class Secretary {
private:
    vector<StockObserver> observers;
public:
    string action;
    void Add(StockObserver ob) {
        observers.push_back(ob);
    }
    void Notify() {
        vector<StockObserver>::iterator p = observers.begin();

        while (p != observers.end()) {
            (*p).Update();
            p++;
        }
    }
};

void StockObserver::Update() {
    cout << name << ":" << sub->action << ",不要玩股票了,要開始工作了" << endl;
}

//用戶端
int main() {
    Secretary *p = new Secretary();
    //創建通知者
    //觀察者
    StockObserver *s1 = new StockObserver("小李", p);
    StockObserver *s2 = new StockObserver("小趙", p);
    //加入通知佇列
    p->Add(*s1);
    p->Add(*s2);
    //事件
    p->action = "老闆來了";
    //通知
    p->Notify();
    return 0;
}

