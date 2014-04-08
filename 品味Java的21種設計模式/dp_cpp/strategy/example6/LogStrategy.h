#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example6 {
///
/// <summary> * 日志记录策略的接口 </summary>
///
class LogStrategy {
    ///
    ///  <summary> * 记录日志 </summary>
    ///  * <param name="msg"> 需记录的日志信息 </param>
    ///
public:
    virtual public void log(std::string) = 0;
};

}
}
}
}
}