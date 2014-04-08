#pragma once

#include "ReadXmlExpression.h"
#include "Context.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example3 {

using org::w3c::dom::Element;
using org::w3c::dom::NodeList;
///
/// <summary> * 元素作为非终结符对应的解释器，解释并执行中间元素 </summary>
///
class ElementExpression : public ReadXmlExpression {
    ///
    ///  <summary> * 用来记录组合的ReadXmlExpression元素 </summary>
    ///
private:
    Collection<ReadXmlExpression *> *eles;
    ///
    ///  <summary> * 元素的名称 </summary>
    ///
    std::string eleName;
public:
    ElementExpression(std::string eleName);
    virtual bool addEle(ReadXmlExpression *ele);
    virtual bool removeEle(ReadXmlExpression *ele);

    virtual std::string *interpret(Context *c);

private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
            eles = std::vector<ReadXmlExpression *>();
            eleName = "";

            initialized = true;
        }
    }
};

}
}
}
}
}