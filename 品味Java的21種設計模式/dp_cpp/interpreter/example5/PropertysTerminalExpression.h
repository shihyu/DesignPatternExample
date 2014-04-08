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
/// <summary> * 以多个元素的属性做为终结符的解释处理对象 </summary>
///
class PropertysTerminalExpression : public ReadXmlExpression {
    ///
    ///  <summary> * 属性名字 </summary>
    ///
private:
    std::string propName;
public:
    PropertysTerminalExpression(std::string propName);

    virtual std::string *interpret(Context *c);
};

}
}
}
}
}