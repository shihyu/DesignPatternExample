#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example5 {

///
/// <summary> * 定义实现部分的接口，可以与抽象部分接口的方法不一样 </summary>
///
class Implementor {
    ///
    ///  <summary> * 示例方法，实现抽象部分需要的某些具体功能 </summary>
    ///
public:
    virtual public void operationImpl() = 0;
};


}
}
}
}
}