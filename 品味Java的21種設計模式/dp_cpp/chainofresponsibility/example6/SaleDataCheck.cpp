#include "SaleDataCheck.h"

namespace cn {
namespace javass {
namespace dp {
namespace chainofresponsibility {
namespace example6 {

bool SaleDataCheck::sale(std::string user, std::string customer, SaleModel *saleModel) {
    //进行数据通用检查，稍麻烦点，每个数据都要检测
    //JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
    if (user == "" || user.trim()->length() == 0) {
        puts("申请人不能为空");
        return false;
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
    if (customer == "" || customer.trim()->length() == 0) {
        puts("客户不能为空");
        return false;
    }

    if (saleModel == 0) {
        puts("销售商品的数据不能为空");
        return false;
    }

    //JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
    if (saleModel->getGoods() == "" || saleModel->getGoods().trim()->length() == 0) {
        puts("销售的商品不能为空");
        return false;
    }

    if (saleModel->getSaleNum() == 0) {
        puts("销售商品的数量不能为0");
        return false;
    }

    //如果通过了上面的检测，那就向下继续执行
    return this->successor->sale(user, customer, saleModel);
}
}
}
}
}
}
