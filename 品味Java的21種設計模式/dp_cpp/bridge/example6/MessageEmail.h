#pragma once

#include "MessageImplementor.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example6 {
///
/// <summary> * 以Email的方式发送消息 </summary>
///
class MessageEmail : public MessageImplementor {

public:
    virtual void send(std::string message, std::string toUser);

};
}
}
}
}
}