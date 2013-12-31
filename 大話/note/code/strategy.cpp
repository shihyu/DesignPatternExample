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
    COperation* op;
public:
    Context(COperation* temp) {
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
    case  '+':
        {
            Context *context = new Context(new AddOperation(a, b));
            cout << context->GetResult() << endl;
        }
        break;
    default:
        break;
    }

    return 0;
}
