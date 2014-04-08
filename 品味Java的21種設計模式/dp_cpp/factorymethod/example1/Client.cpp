#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example1 {

void Client::main(std::string args[]) {
    ExportOperate *operate = new ExportOperate();
    operate->export(2, "测试数据");
}
}
}
}
}
}
