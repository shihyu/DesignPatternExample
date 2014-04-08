#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace composite {
namespace example5 {

///
/// <summary> * 抽象的组件对象，安全性的实现方式 </summary>
///
class Component {
    ///
    ///  <summary> * 输出组件自身的名称 </summary>
    ///
public:
    virtual void printStruct(std::string preStr) = 0;
};


}
}
}
}
}