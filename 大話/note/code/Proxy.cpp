/* GOOD：遠端代理，可以隱藏一個物件在不同位址空間的事實
 * 虛擬代理：通過代理來存放需要很長時間產生實體的物件
 * 安全代理：用來控制真實物件的存取權限
 * 智能引用：當調用真實物件時，代理處理另外一些事
 **/

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

