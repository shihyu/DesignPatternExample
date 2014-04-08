#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Man;
class Woman;

//行為
class Action {
public:
    virtual void GetManConclusion(Man *concreteElementA) = 0;
    virtual void GetWomanConclusion(Woman *concreteElementB) = 0;
};

//成功
class Success : public Action {
public:
    virtual void GetManConclusion(Man *concreteElementA) {
        cout << "男人成功時,背後有個偉大的女人" << endl;
    }
    virtual void GetWomanConclusion(Woman *concreteElementB) {
        cout << "女人成功時,背後有個沒用的男人" << endl;
    }
};

//失敗
class Failure : public Action {
public:
    virtual void GetManConclusion(Man *concreteElementA) {
        cout << "男人失敗時,背後有個偉大的女人" << endl;
    }
    virtual void GetWomanConclusion(Woman *concreteElementB) {
        cout << "女人失敗時,背後有個沒用的男人" << endl;
    }
};

//抽象人類
class Person {
public:
    virtual void Accept(Action *visitor) = 0;
};

//男人
class Man : public Person {
public:
    virtual void Accept(Action *visitor) {
        visitor->GetManConclusion(this);
    }
};

//女人
class Woman : public Person {
public:
    virtual void Accept(Action *visitor) {
        visitor->GetWomanConclusion(this);
    }
};

//物件結構類
class ObjectStructure {
private:
    vector<Person *> m_personList;
public:
    void Add(Person *p) {
        m_personList.push_back(p);
    }
    void Display(Action *a) {
        vector<Person *>::iterator p = m_personList.begin();

        while (p != m_personList.end()) {
            (*p)->Accept(a);
            p++;
        }
    }
};

//用戶端
int main() {
    ObjectStructure *os = new ObjectStructure();
    os->Add(new Man());
    os->Add(new Woman());
    Success *success = new Success();
    os->Display(success);
    Failure *fl = new Failure();
    os->Display(fl);
    return 0;
}
