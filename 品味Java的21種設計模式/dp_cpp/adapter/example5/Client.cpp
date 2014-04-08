#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace adapter {
namespace example5 {

void Client::main(std::string args[]) {
    //准备日志内容，也就是测试的数据
    LogModel *lm1 = new LogModel();
    lm1->setLogId("001");
    lm1->setOperateUser("admin");
    lm1->setOperateTime("2010-03-02 10:08:18");
    lm1->setLogContent("这是一个测试");

    std::vector<LogModel *> list = std::vector<LogModel *>();
    list.push_back(lm1);


    //创建新版的操作日志的接口对象
    LogDbOperateApi *api = new ClassAdapter("");

    //保存日志文件
    api->createLog(lm1);

    //读取日志文件的内容
    std::vector<LogModel *> allLog = api->getAllLog();
    puts("allLog=" + allLog);
}
}
}
}
}
}
