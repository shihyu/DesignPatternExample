#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example6 {

void Client::main(std::string args[]) {
    //张三先登录系统创建了一个订单
    Order *order = new OrderProxy("设计模式", 100, "张三");
    //李四想要来修改，那就会报错
    order->setOrderNum(123, "李四");
    //输出order
    puts("李四修改后订单记录没有变化：" + order);
    //张三修改就不会有问题
    order->setOrderNum(123, "张三");
    //再次输出order
    puts("张三修改后，订单记录：" + order);
}
}
}
}
}
}
