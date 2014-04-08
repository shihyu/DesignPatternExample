#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace factorymethod {
namespace example3 {

void Client::main(std::string args[]) {
    //创建需要使用的Creator对象
    ExportOperate *operate = new ExportDBOperate();
    //调用输出数据的功能方法
    operate->export("测试数据");
}
}
}
}
}
}
