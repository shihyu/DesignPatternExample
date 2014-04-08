#include "DepManager2.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example5 {

object *DepManager2::handleRequest(RequestModel *request) {
    if (PreFeeRequestModel::FEE_TYPE.equals(request->getType())) {
        //表示预支差旅费用申请
        return myHandler(request);
    } else {
        //其他的让父类去处理
        return DepManager::handleRequest(request);
    }
}

object *DepManager2::myHandler(RequestModel *request) {
    //先把通用的对象造型回来
    PreFeeRequestModel *fr = static_cast<PreFeeRequestModel *>(request);

    //部门经理的权限比较小，只能在20000以内
    if (fr->getFee() < 20000) {
        //工作需要嘛，统统同意
        puts("部门经理同意" + fr->getUser() + "预支差旅费用" + fr->getFee() + "元的请求");
        return true;
    } else {
        //超过20000，继续传递给级别更高的人处理
        if (this->successor != 0) {
            return this->successor->handleRequest(request);
        }
    }

    return false;
}
}
}
}
}
}
