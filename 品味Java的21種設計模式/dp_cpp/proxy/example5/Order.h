#pragma once

#include "OrderApi.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example5 {

///
/// <summary> * 订单对象 </summary>
///
class Order : public OrderApi {
    ///
    ///  <summary> * 订单订购的产品名称 </summary>
    ///
private:
    std::string productName;
    ///
    ///  <summary> * 订单订购的数量 </summary>
    ///
    int orderNum;
    ///
    ///  <summary> * 创建订单的人员 </summary>
    ///
    std::string orderUser;

    ///
    ///  <summary> * 构造方法，传入构建需要的数据 </summary>
    ///  * <param name="productName"> 订单订购的产品名称 </param>
    ///  * <param name="orderNum"> 订单订购的数量 </param>
    ///  * <param name="orderUser"> 创建订单的人员 </param>
    ///
public:
    Order(std::string productName, int orderNum, std::string orderUser);

    virtual std::string getProductName();
    virtual void setProductName(std::string productName, std::string user);
    virtual int getOrderNum();
    virtual void setOrderNum(int orderNum, std::string user);
    virtual std::string getOrderUser();
    virtual void setOrderUser(std::string orderUser, std::string user);
    virtual std::string ToString();
};

}
}
}
}
}