#include "MessageSMS.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example6 {

void MessageSMS::send(std::string message, std::string toUser) {
    puts("使用站内短消息的方式，发送消息'" + message + "'给" + toUser);
}
}
}
}
}
}
