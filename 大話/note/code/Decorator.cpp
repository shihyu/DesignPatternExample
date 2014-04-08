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

