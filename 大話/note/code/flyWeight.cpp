#include <iostream>
#include <string>
#include <vector>
using namespace std;

//抽象的網站
class WebSite {
public:
    virtual void Use() = 0;
};

//具體的共用網站
class ConcreteWebSite : public WebSite {
private:
    string name;
public:
    ConcreteWebSite(string strName) {
        name = strName;
    }
    virtual void Use() {
        cout << "網站分類:" << name << endl;
    }
};

//不共用的網站
class UnShareWebSite : public WebSite {
private:
    string name;
public:
    UnShareWebSite(string strName) {
        name = strName;
    }
    virtual void Use() {
        cout << "不共用的網站:" << name << endl;
    }
};

//網站工廠類,用於存放共用的 WebSite 物件
class WebFactory {
private:
    vector<WebSite *> websites;
public:
    WebSite *GetWeb() {
        vector<WebSite *>::iterator p = websites.begin();
        return *p;
    }
    WebFactory() {
        websites.push_back(new ConcreteWebSite("測試"));
    }
};

//用戶端
int main() {
    WebFactory *f = new WebFactory();
    WebSite *ws = f->GetWeb();
    ws->Use();
    WebSite *ws2 = f->GetWeb();
    ws2->Use();
    //不共用的類
    WebSite *ws3 = new UnShareWebSite("測試");
    ws3->Use();
    return 0;
}
