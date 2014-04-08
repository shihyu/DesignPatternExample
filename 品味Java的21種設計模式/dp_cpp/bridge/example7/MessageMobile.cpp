#include "MessageMobile.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example7 {

void MessageMobile::send(std::string message, std::string toUser) {
    puts("使用手机短消息的方式，发送消息'" + message + "'给" + toUser);
}
}
}
}
}
}
