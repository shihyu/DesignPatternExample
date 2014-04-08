#pragma once

#include "ReadXmlExpression.h"
#include "Context.h"
#include <string>
#include <vector>

namespace cn {
namespace javass {
namespace dp {
namespace interpreter {
namespace example5 {


using org::w3c::dom::Element;
///
/// <summary> * 以多个元素作为终结符的解释处理对象 </summary>
///
class ElementsTerminalExpression : public ReadXmlExpression {
    ///
    ///  <summary> * 元素的名称 </summary>
    ///
private:
    std::string eleName;
public:
    ElementsTerminalExpression(std::string name);

    virtual std::string *interpret(Context *c);


private:
    bool initialized;
    void InitializeInstanceFields() {
        if (! initialized) {
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