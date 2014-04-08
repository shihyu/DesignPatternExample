#include <iostream>
#include <string>
#include <vector>
using namespace std;

//請求
class Request {
public:
    string m_strContent;
    int m_nNumber;
};

//管理者
class Manager {
protected:
    Manager *manager;
    string name;
public:
    Manager(string temp) {
        name = temp;
    }
    void SetSuccessor(Manager *temp) {
        manager = temp;
    }
    virtual void GetRequest(Request *request) = 0;
};

//經理
class CommonManager : public Manager {
public:
    CommonManager(string strTemp) : Manager(strTemp) {}
    virtual void GetRequest(Request *request) {
        if (request->m_nNumber >= 0 && request->m_nNumber < 10) {
            cout << name << "處理了" << request->m_nNumber << "個請求" << endl;
        } else {
            manager->GetRequest(request);
        }
    }
};

//總監
class MajorDomo : public Manager {
public:
    MajorDomo(string name) : Manager(name) {}
    virtual void GetRequest(Request *request) {
        if (request->m_nNumber >= 10) {
            cout << name << "處理了" << request->m_nNumber << "個請求" << endl;
        }
    }
};

//用戶端
int main() {
    Manager *common = new CommonManager("張經理");
    Manager *major = new MajorDomo("李總監");
    common->SetSuccessor(major);
    Request *req = new Request();
    req->m_nNumber = 33;
    common->GetRequest(req);
    req->m_nNumber = 3;
    common->GetRequest(req);
    return 0;
}
