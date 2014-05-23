/* GOOD：將抽象部分與實現部分分離，使它們可以獨立變化。
 * 這裡說的意思不是讓抽象基類與具體類分離，而是現實系統可能有多角度分類，
 * 每一種分類都有可能變化，那麼把這種多角度分離出來讓它們獨立變化，減少它們之間的耦
 * 合性，即如果繼承不能實現“開放－封閉原則”的話，就應該考慮用橋接模式。如下例：讓
 * “手機”既可以按品牌分類也可以
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//手機軟體
class HandsetSoft {
public:
    virtual void Run() = 0;
};

//遊戲軟體
class HandsetGame : public HandsetSoft {
public:
    virtual void Run() {
        cout << "運行手機遊戲" << endl;
    }
};

//通訊錄軟體
class HandSetAddressList : public HandsetSoft {
public:
    virtual void Run() {
        cout << "手機通訊錄" << endl;
    }
};

//手機品牌
class HandsetBrand {
protected:
    HandsetSoft *m_soft;
public:
    void SetHandsetSoft(HandsetSoft *temp) {
        m_soft = temp;
    }
    virtual void Run() = 0;
};

//M 品牌
class HandsetBrandM : public HandsetBrand {
public:
    virtual void Run() {
        m_soft->Run();
    }
};

//N 品牌
class HandsetBrandN : public HandsetBrand {
public:
    virtual void Run() {
        m_soft->Run();
    }
};

//用戶端
int main() {
    HandsetBrand *brand;
    brand = new HandsetBrandM();
    brand->SetHandsetSoft(new HandsetGame());
    brand->Run();
    brand->SetHandsetSoft(new HandSetAddressList());
    brand->Run();
    return 0;
}
