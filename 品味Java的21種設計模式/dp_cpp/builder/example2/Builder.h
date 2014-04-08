#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example2 {

///
/// <summary> * 构建器接口，定义创建一个产品对象所需的各个部件的操作 </summary>
///
class Builder {
    ///
    ///  <summary> * 示意方法，构建某个部件 </summary>
    ///
public:
    virtual public void buildPart() = 0;
};
}
}
}
}
}