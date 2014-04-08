#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace bridge {
namespace example2 {

void Client::main(std::string args[]) {
    Message *m = new CommonMessageSMS();
    m->send("aa", "au");

    m = new CommonMessageEmail();
    m->send("aa", "au");
}
}
}
}
}
}
