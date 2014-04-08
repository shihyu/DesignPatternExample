#pragma once

#include "SaleModel.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example6 {
///
/// <summary> * 商品销售管理的业务接口 </summary>
///
class GoodsSaleEbi {
    ///
    ///  <summary> * 保存销售信息，本来销售数据应该是多条，太麻烦了，为了演示，简单点 </summary>
    ///  * <param name="user"> 操作人员 </param>
    ///  * <param name="customer"> 客户 </param>
    ///  * <param name="saleModel"> 销售数据 </param>
    ///  * <returns> 是否保存成功 </returns>
    ///
public:
    virtual public bool sale(std::string, std::string, SaleModel *) = 0;
};

}
}
}
}
}