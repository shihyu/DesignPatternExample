#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example9 {

class Command {
public:
    virtual public void execute() = 0;
    ///
    ///  <summary> * 设置要输出的内容 </summary>
    ///  * <param name="s"> 要输出的内容 </param>
    ///
    virtual public void setStr(std::string) = 0;
};

}
}
}
}
}