/* GOOD:當你向舊的類中添加新代碼時，一般是為了添加核心職責或主要行為。而當需
 * 要加入的僅僅是一些特定情況下才會執行的特定的功能時（簡單點就是不是核心應用的功
 * 能），就會增加類的複雜度。裝飾模式就是把要添加的附加功能分別放在單獨的類中，並讓
 * 這個類包含它要裝飾的物件，當需要執行時，用戶端就可以有選擇地、按順序地使用裝飾功
 * 能包裝物件。*/

#include <string>
#include <iostream>
using namespace std;

//人
class Person {
private:
    string m_strName;
public:
    Person(string strName) {
        m_strName = strName;
    }
    Person() {}
    virtual void Show() {
        cout << "裝扮的是:" << m_strName << endl;
    }
};

// 裝飾類
class Finery : public Person  {
protected:
    Person *m_component;
public:
    void Decorate(Person *component) {
        m_component = component;
    }
    virtual void Show() {
        m_component->Show();
    }
};

//T 恤
class TShirts: public Finery {
public:
    virtual void Show() {
        cout << "T Shirts" << endl;
        m_component->Show();
    }
};

// 褲子
class BigTrouser : public Finery {
public:
    virtual void Show() {
        cout << " Big Trouser" << endl;
        m_component->Show();
    }
};

// 用戶端
int main() {
    Person *p = new Person("小李");
    BigTrouser *bt = new BigTrouser();
    TShirts *ts = new TShirts();
    bt->Decorate(p);
    ts->Decorate(bt);
    ts->Show();
    return 0;
}

