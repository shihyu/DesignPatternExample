#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example4 {

void Client::main(std::string args[]) {
    //1：选择并创建需要使用的策略对象
    Strategy *strategy = new LargeCustomerStrategy();
    //2：创建上下文
    Price *ctx = new Price(strategy);

    //3：计算报价
    double quote = ctx->quote(1000);
    puts("向客户报价：" + quote);
}
}
}
}
}
}
