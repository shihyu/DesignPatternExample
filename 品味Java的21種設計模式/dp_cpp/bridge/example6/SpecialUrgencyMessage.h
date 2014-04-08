#pragma once

#include "AbstractMessage.h"
#include "MessageImplementor.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example6 {
///
/// <summary> * ÌØ¼±ÏûÏ¢ </summary>
///
class SpecialUrgencyMessage : public AbstractMessage {

public:
    SpecialUrgencyMessage(MessageImplementor *impl);

    virtual void hurry(std::string messageId);

    virtual void sendMessage(std::string message, std::string toUser);
};

}
}
}
}
}