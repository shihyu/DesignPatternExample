#pragma once

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example7 {


///
/// <summary> * 订单的接口 </summary>
///
class OrderApi {
    ///
    ///  <summary> * 获取订单产品数量 </summary>
    ///  * <returns> 订单中产品数量 </returns>
    ///
public:
    virtual public int getOrderProductNum() = 0;
    ///
    ///  <summary> * 设置订单产品数量 </summary>
    ///  * <param name="num"> 订单产品数量 </param>
    ///
    virtual public void setOrderProductNum(int) = 0;

};

}
}
}
}
}