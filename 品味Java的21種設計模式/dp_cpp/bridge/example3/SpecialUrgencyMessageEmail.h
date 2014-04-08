#pragma once

#include "SpecialUrgencyMessage.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example3 {

class SpecialUrgencyMessageEmail : public SpecialUrgencyMessage {

public:
    virtual void hurry(std::string messageId);

    virtual void send(std::string message, std::string toUser);

};

}
}
}
}
}