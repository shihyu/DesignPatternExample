#include <string>
#include <iostream>
using namespace std;

//定義介面
class Interface {
public:
    virtual void Request() = 0;
    virtual ~Interface() {
    }
};

//真實類
class RealClass : public Interface {
public:
    virtual void Request() {
        cout << "真實的請求" << endl;
    }
};

//代理類
class ProxyClass : public Interface {
private:
    RealClass *m_realClass;
public:
    virtual void Request() {
        m_realClass = new RealClass();
        m_realClass->Request();
        delete m_realClass;
    }
};

// 用戶端:
int main() {
    ProxyClass *test = new ProxyClass();
    test->Request();
    return 0;
}

