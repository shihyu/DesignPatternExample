#include "GeneralManager.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example5 {

object *GeneralManager::handleRequest(RequestModel *rm) {
    if (FeeRequestModel::FEE_TYPE.equals(rm->getType())) {
        return handleFeeRequest(rm);
    } else {
        return Handler::handleRequest(rm);
    }
}

object *GeneralManager::handleFeeRequest(RequestModel *rm) {
    //先把通用的对象造型回来
    FeeRequestModel *frm = static_cast<FeeRequestModel *>(rm);
    std::string str = "";

    //总经理的权限很大，只要请求到了这里，他都可以处理
    if (frm->getFee() >= 1000) {
        //为了测试，简单点，只同意小李的
        if ((new std::string("小李"))->equals(frm->getUser())) {
            str = "总经理同意" + frm->getUser() + "聚餐费用" + frm->getFee() + "元的请求";
        } else {
            //其他人一律不同意
            str = "总经理不同意" + frm->getUser() + "聚餐费用" + frm->getFee() + "元的请求";
        }

        return str;
    } else {
        //如果还有后继的处理对象，继续传递
        if (this->successor != 0) {
            return successor->handleRequest(rm);
        }
    }

    return str;
}
}
}
}
}
}
