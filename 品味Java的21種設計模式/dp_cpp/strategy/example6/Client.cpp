#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example6 {

void Client::main(std::string args[]) {
    LogContext *log = new LogContext();
    log->log("记录日志");
    log->log("再次记录日志");
}
}
}
}
}
}
