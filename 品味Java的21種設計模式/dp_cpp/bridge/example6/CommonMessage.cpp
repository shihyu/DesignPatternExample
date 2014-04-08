#include "CommonMessage.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example6 {

CommonMessage::CommonMessage(MessageImplementor *impl) : AbstractMessage(impl) {
}

void CommonMessage::sendMessage(std::string message, std::string toUser) {
    //对于普通消息，什么都不干，直接调用父类的方法，把消息发送出去就可以了
    AbstractMessage::sendMessage(message, toUser);
}
}
}
}
}
}
