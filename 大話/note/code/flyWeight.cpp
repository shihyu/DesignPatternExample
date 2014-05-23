/* GOOD：運用共用技術有效地支援大量細細微性的物件（對於C++來說就是共用一個區塊啦，物件指標指向同一個地方）。
 * 如果一個應用程式使用了大量的物件，而這些物件造成了很大的存儲開銷就應該考慮使用。
 * 還有就是物件的大多數狀態可以外部狀態，如果刪除物件的外部狀態，那麼可以用較少的共用物件取代多組物件，此時可以考慮使用享元。
 */

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
