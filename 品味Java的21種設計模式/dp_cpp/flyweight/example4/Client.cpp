#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace flyweight {
namespace example4 {

void Client::main(std::string args[]) throw(Exception) {
    //需要先登录，然后再判断是否有权限
    SecurityMgr *mgr = SecurityMgr::getInstance();
    mgr->login("张三");
    mgr->login("李四");
    bool f1 = mgr->hasPermit("张三", "薪资数据", "查看");
    bool f2 = mgr->hasPermit("李四", "薪资数据", "查看");
    bool f3 = mgr->hasPermit("李四", "薪资数据", "修改");

    puts("f1==" + f1);
    puts("f2==" + f2);
    puts("f3==" + f3);

    for (int i = 0; i < 3; i++) {
        mgr->login("张三" + i);
        mgr->hasPermit("张三" + i, "薪资数据", "查看");
    }
}
}
}
}
}
}
