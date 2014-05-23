/* 定義演算法家族，分別封裝起來，讓它們之間可以互相替換，讓演算法變化，不會
 * 影響到用戶
 * GOOD:適合類中的成員以方法為主，演算法經常變動；簡化了單元測試（因為每
 * 個演算法都有自己的類，可以通過自己的介面單獨測試。
 * 策略模式和簡單工廠基本相同，但簡單工廠模式只能解決物件創建問題，對於經常
 * 變動的演算法應使用策略模式。
 * BUG:用戶端要做出判斷*/

#include <iostream>
using namespace std;

//策略基類
class COperation {
public:
    int m_nFirst;
    int m_nSecond;
    virtual double GetResult() {
        double dResult = 0;
        return dResult;
    }
};

//策略具體類—加法類
class AddOperation : public COperation {
public:
    AddOperation(int a, int b) {
        m_nFirst = a;
        m_nSecond = b;
    }
    virtual double GetResult() {
        return m_nFirst + m_nSecond;
    }
};

class Context {
private:
    COperation *op;
public:
    Context(COperation *temp) {
        op = temp;
    }
    double GetResult() {
        return op->GetResult();
    }
};

//用戶端
int main() {
    int a, b;
    char c;
    cin >> a >> b;
    cout << "請輸入運算子:"
         ;
    cin >> c;

    switch (c) {
        case  '+': {
            Context *context = new Context(new AddOperation(a, b));
            cout << context->GetResult() << endl;
        }
        break;

        default:
            break;
    }

    return 0;
}
