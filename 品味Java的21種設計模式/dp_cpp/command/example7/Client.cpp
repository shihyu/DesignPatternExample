#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example7 {

void Client::main(std::string args[]) {
    //先要启动后台，让整个程序运行起来
    CookManager::runCookManager();

    //为了简单，直接用循环模拟多个桌号点菜
    for (int i = 0; i < 5; i++) {
        //创建服务员
        Waiter *waiter = new Waiter();
        //创建命令对象，就是要点的菜
        Command *chop = new ChopCommand(i);
        Command *duck = new DuckCommand(i);
        //点菜，就是把这些菜让服务员记录下来
        waiter->orderDish(chop);
        waiter->orderDish(duck);
        //点菜完毕
        waiter->orderOver();
    }
}
}
}
}
}
}
