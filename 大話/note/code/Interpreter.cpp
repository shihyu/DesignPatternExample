/* GOOD：通常當一個語言需要解釋執行，並且你可以將該語言中的句子表示成為一個抽象的語法樹時，可以使用解譯器模式。*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Context;
class AbstractExpression {
public:
    virtual void Interpret(Context *context) = 0;
};

class Expression : public AbstractExpression {
public:
    virtual void Interpret(Context *context) {
        cout << "終端解譯器" << endl;
    };
};

class NonterminalExpression : public AbstractExpression {
public:
    virtual void Interpret(Context *context) {
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
    Context *context = new Context();
    vector<AbstractExpression *> express;
    express.push_back(new Expression());
    express.push_back(new NonterminalExpression());
    express.push_back(new NonterminalExpression());
    vector<AbstractExpression *>::iterator p = express.begin();

    while (p != express.end()) {
        (*p)->Interpret(context);
        p++;
    }

    return 0;
}
