#pragma once

#include "Abstraction.h"
#include "Implementor.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example5 {
///
/// <summary> * 扩充由Abstraction定义的接口功能 </summary>
///
class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction(Implementor *impl);
    ///
    ///  <summary> * 示例操作，实现一定的功能，可能会使用具体实现部分的实现方法，
    ///  * 但是本方法更大的可能是使用Abstraction中定义的方法，
    ///  * 通过组合使用Abstraction中定义的方法来完成更多的功能 </summary>
    ///
    virtual void otherOperation();
};

}
}
}
}
}