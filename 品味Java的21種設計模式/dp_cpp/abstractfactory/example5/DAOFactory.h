#pragma once

#include "OrderMainDAO.h"
#include "OrderDetailDAO.h"

namespace cn {
namespace javass {
namespace dp {
namespace abstractfactory {
namespace example5 {
///
/// <summary> * 抽象工厂，创建订单主、子记录对应的DAO对象 </summary>
///
class DAOFactory {
    ///
    ///  <summary> * 创建订单主记录对应的DAO对象 </summary>
    ///  * <returns> 订单主记录对应的DAO对象 </returns>
    ///
public:
    virtual OrderMainDAO *createOrderMainDAO() = 0;
    ///
    ///  <summary> * 创建订单子记录对应的DAO对象 </summary>
    ///  * <returns> 订单子记录对应的DAO对象 </returns>
    ///
    virtual OrderDetailDAO *createOrderDetailDAO() = 0;
};

}
}
}
}
}