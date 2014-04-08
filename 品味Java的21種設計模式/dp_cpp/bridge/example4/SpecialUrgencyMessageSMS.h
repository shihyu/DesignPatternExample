#pragma once

#include "SpecialUrgencyMessage.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example4 {

class SpecialUrgencyMessageSMS : public SpecialUrgencyMessage {

public:
    virtual void hurry(std::string messageId);

    virtual void send(std::string message, std::string toUser);

};

}
}
}
}
}