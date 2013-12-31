#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Context;
class AbstractExpression {
public:
    virtual void Interpret(Context* context) = 0;
};

class Expression : public AbstractExpression {
public:
    virtual void Interpret(Context* context) {
        cout << "終端解譯器" << endl;
    };
};

class NonterminalExpression : public AbstractExpression {
public:
    virtual void Interpret(Context* context) {
        cout << "非終端解譯器" << endl;
    }
};

class Context {
public:
    string input;
    string output;
};

//用戶端
int main() {
    Context* context = new Context();
    vector<AbstractExpression*> express;
    express.push_back(new Expression());
    express.push_back(new NonterminalExpression());
    express.push_back(new NonterminalExpression());
    vector<AbstractExpression*>::iterator p = express.begin();

    while (p != express.end()) {
        (*p)->Interpret(context);
        p++;
    }

    return 0;
}
