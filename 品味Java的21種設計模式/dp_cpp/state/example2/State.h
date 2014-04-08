#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example2 {


///
/// <summary> * 封装与Context的一个特定状态相关的行为 </summary>
///
class State {
    ///
    ///  <summary> * 状态对应的处理 </summary>
    ///  * <param name="sampleParameter"> 示例参数，说明可以传入参数，具体传入
    ///  *             什么样的参数，传入几个参数，由具体应用来具体分析 </param>
    ///
public:
    virtual public void handle(std::string) = 0;
};
}
}
}
}
}