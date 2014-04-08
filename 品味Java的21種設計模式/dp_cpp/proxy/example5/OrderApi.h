#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace proxy {
namespace example5 {

///
/// <summary> * 订单对象的接口定义 </summary>
///
class OrderApi {
    ///
    ///  <summary> * 获取订单订购的产品名称 </summary>
    ///  * <returns> 订单订购的产品名称 </returns>
    ///
public:
    virtual public std::string getProductName() = 0;
    ///
    ///  <summary> * 设置订单订购的产品名称 </summary>
    ///  * <param name="productName"> 订单订购的产品名称 </param>
    ///  * <param name="user"> 操作人员 </param>
    ///
    virtual public void setProductName(std::string, std::string) = 0;
    ///
    ///  <summary> * 获取订单订购的数量 </summary>
    ///  * <returns> 订单订购的数量 </returns>
    ///
    virtual public int getOrderNum() = 0;
    ///
    ///  <summary> * 设置订单订购的数量 </summary>
    ///  * <param name="orderNum"> 订单订购的数量 </param>
    ///  * <param name="user"> 操作人员 </param>
    ///
    virtual public void setOrderNum(int, std::string) = 0;
    ///
    ///  <summary> * 获取创建订单的人员 </summary>
    ///  * <returns> 创建订单的人员 </returns>
    ///
    virtual public std::string getOrderUser() = 0;
    ///
    ///  <summary> * 设置创建订单的人员 </summary>
    ///  * <param name="orderUser"> 创建订单的人员 </param>
    ///  * <param name="user"> 操作人员 </param>
    ///
    virtual public void setOrderUser(std::string, std::string) = 0;
};
}
}
}
}
}