#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example3 {

///
/// <summary> * 组件对象的接口，可以给这些对象动态的添加职责 </summary>
///
class Component {
    ///
    ///  <summary> * 示例方法 </summary>
    ///
public:
    virtual void operation() = 0;
};

}
}
}
}
}