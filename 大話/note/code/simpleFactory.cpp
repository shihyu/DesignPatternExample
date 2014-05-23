/* 主要用於創建對象。新添加類時，不會影響以前的系統代碼。核心思想是用一個工廠來
 * 根據輸入的條件產生不同的類，然後根據不同類的virtual 函數得到不同的結果。
 * GOOD:適用於不同情況創建不同的類時
 * BUG：用戶端必須要知道基類和工廠類，耦合性差
 */

#include <iostream>
using namespace std;

//基類
class COperation {
public:
    int m_nFirst;
    int m_nSecond;
    virtual double GetResult() {
        double dResult = 0;
        return dResult;
    }
};

//加法
class AddOperation : public COperation {
public:
    virtual double GetResult() {
        return m_nFirst + m_nSecond;
    }
};

//減法
class SubOperation : public COperation {
public:
    virtual double GetResult() {
        return m_nFirst - m_nSecond;
    }
};

//工廠類
class CCalculatorFactory {
public:
    static COperation *Create(char cOperator);
};

COperation *CCalculatorFactory::Create(char cOperator) {
    COperation *oper;

    //在 C#中可以用反射來取消判斷時用的 switch,在 C++中用什麼呢?RTTI??
    switch (cOperator) {
        case '+':
            oper = new AddOperation();
            break;

        case '-':
            oper = new SubOperation();
            break;

        default:
            oper = new AddOperation();
            break;
    }

    return oper;
}

//用戶端
int main() {
    int a, b;
    cin >> a >> b;
    COperation *op = CCalculatorFactory::Create('-');
    op->m_nFirst = a;
    op->m_nSecond = b;
    cout << op->GetResult() << endl;
    return 0;
}
