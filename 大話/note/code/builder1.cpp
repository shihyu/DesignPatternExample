#include <string>
#include <iostream>
#include <vector>
using namespace std;

//最終的產品類
class Product {
private:
    vector<string> m_product;
public:
    void Add(string strtemp) {
        m_product.push_back(strtemp);
    }
    void Show() {
        vector<string>::iterator p = m_product.begin();

        while (p != m_product.end()) {
            cout << *p << endl;
            p++;
        }
    }
};

//建造者基類
class Builder {
public:
    virtual void BuilderA() = 0;
    virtual void BuilderB() = 0;
    virtual Product* GetResult() = 0;
};
//第一種建造方式
class ConcreteBuilder1 : public Builder {
private:
    Product* m_product;
public:
    ConcreteBuilder1() {
        m_product = new Product();
    }
    virtual void BuilderA() {
        m_product->Add("one");
    }
    virtual void BuilderB() {
        m_product->Add("two");
    }
    virtual Product* GetResult() {
        return m_product;
    }
};

//第二種建造方式
class ConcreteBuilder2 : public Builder {
private:
    Product* m_product;
public:
    ConcreteBuilder2() {
        m_product = new Product();
    }
    virtual void BuilderA() {
        m_product->Add("A");
    }
    virtual void BuilderB() {
        m_product->Add("B");
    }
    virtual Product* GetResult() {
        return m_product;
    }
};

//指揮者類
class Direct {
public:
    void Construct(Builder* temp) {
        temp->BuilderA();
        temp->BuilderB();
    }
};

//用戶端
int main() {
    Direct* p = new Direct();
    Builder* b1 = new ConcreteBuilder1();
    Builder* b2 = new ConcreteBuilder2();
    p->Construct(b1);
    //調用第一種方式
    Product* pb1 = b1->GetResult();
    pb1->Show();
    p->Construct(b2);
    //調用第二種方式
    Product* pb2 = b2->GetResult();
    pb2->Show();
    return 0;
}

