#include <iostream>
using namespace std;

class Target {
public:
    virtual void Request() {
        cout << "普通的請求" << endl;
    }
    virtual ~Target() {
    
    }
};

class Adaptee {
public:
    void SpecificalRequest() {
        cout << "特殊請求" << endl;
    }
};

class Adapter : public Target {
private:
    Adaptee* ada;
public:
    virtual void Request() {
        ada->SpecificalRequest();
        Target::Request();
    }
    Adapter() {
        ada = new Adaptee();
    }
    ~Adapter() {
        delete ada;
    }
};

// 用戶端:
int main() {
    Adapter* ada = new Adapter();
    ada->Request();
    delete ada;
    return 0;
}

