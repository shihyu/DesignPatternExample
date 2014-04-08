#pragma once

#include "OrderApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example3 {
///
/// <summary> * 处理订单的业务对象 </summary>
///
class OrderBusiness {
    ///
    ///  <summary> * 创建订单的方法 </summary>
    ///  * <param name="order"> 订单的接口对象 </param>
    ///
public:
    virtual void saveOrder(OrderApi *order);
};
}
}
}
}
}