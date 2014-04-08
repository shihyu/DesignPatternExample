#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example7 {
///
/// <summary> * 实现发送消息的统一接口 </summary>
///
class MessageImplementor {
    ///
    ///  <summary> * 发送消息 </summary>
    ///  * <param name="message"> 要发送的消息内容 </param>
    ///  * <param name="toUser"> 把消息发送的目的人员 </param>
    ///
public:
    virtual public void send(std::string, std::string) = 0;
};

}
}
}
}
}