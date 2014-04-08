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

    AddOperation() {
    }

    virtual double GetResult() {
        return m_nFirst + m_nSecond;
    }
};

class Context {
private:
    COperation *op;
public:
    Context(char cType) {
        switch (cType) {
            case '+':
                op = new AddOperation(3, 8);
                break;

            default:
                op = new AddOperation();
                break;
        }
    }
    double GetResult() {
        return op->GetResult();
    }
};

//用戶端
int main() {
    Context *test = new Context('+');
    cout << test->GetResult() << endl;
    return 0;
}
