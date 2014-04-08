#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace templatemethod {
namespace example4 {

void Client::main(std::string args[]) {
    //准备登录人的信息
    LoginModel *lm = new LoginModel();
    lm->setLoginId("admin");
    lm->setPwd("workerpwd");
    //准备用来进行判断的对象
    LoginTemplate *lt = new WorkerLogin();
    LoginTemplate *lt2 = new NormalLogin();
    //进行登录测试
    bool flag = lt->login(lm);
    puts("可以登录工作平台=" + flag);

    bool flag2 = lt2->login(lm);
    puts("可以进行普通人员登录=" + flag2);

    //准备登录人的信息
    NormalLoginModel *nlm = new NormalLoginModel();
    nlm->setLoginId("testUser");
    nlm->setPwd("testpwd");
    nlm->setQuestion("testQuestion");
    nlm->setAnswer("testAnswer");
    //准备用来进行判断的对象
    LoginTemplate *lt3 = new NormalLogin2();
    //进行登录测试
    bool flag3 = lt3->login(nlm);
    puts("可以进行普通人员加强版登录=" + flag3);
}
}
}
}
}
}
