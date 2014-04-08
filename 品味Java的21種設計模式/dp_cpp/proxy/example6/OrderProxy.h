#pragma once

#include "Order.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example6 {

///
/// <summary> * 订单的代理对象 </summary>
///
class OrderProxy : public Order {

public:
    OrderProxy(std::string productName, int orderNum, std::string orderUser);

    virtual void setProductName(std::string productName, std::string user);
    virtual void setOrderNum(int orderNum, std::string user);
    virtual void setOrderUser(std::string orderUser, std::string user);

    virtual std::string ToString();
};

}
}
}
}
}