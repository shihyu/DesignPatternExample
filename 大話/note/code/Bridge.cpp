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
