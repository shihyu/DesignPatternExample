#include "ElementTerminalExpression.h"

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example5 {
using org::w3c::dom::Element;

ElementTerminalExpression::ElementTerminalExpression(std::string name) {
    InitializeInstanceFields();
    this->eleName = name;
}

std::string *ElementTerminalExpression::interpret(Context *c) {
    //先取出上下文里的当前元素作为父级元素
    std::vector<Element *> pEles = c->getPreEles();
    //查找到当前元素名称所对应的xml元素
    Element *ele = 0;

    if (pEles.empty()) {
        //说明现在获取的是根元素
        ele = c->getDocument()->getDocumentElement();
    } else {
        //获取当前的元素
        ele = c->getNowEles(pEles.front(), eleName).front();
    }

    //然后需要去获取这个元素的值
    std::string ss[1];
    ss[0] = ele->getFirstChild()->getNodeValue();
    return ss;
}
}
}
}
}
}
