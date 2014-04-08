#pragma once

#include "Message.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example3 {
///
/// <summary> * 特急消息的抽象接口 </summary>
///
class SpecialUrgencyMessage : public Message {
public:
    virtual public void hurry(std::string) = 0;
};

}
}
}
}
}