#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example6 {
///
/// <summary> * 封装销售单的数据，简单的示意一些 </summary>
///
class SaleModel {
    ///
    ///  <summary> * 销售的商品 </summary>
    ///
private:
    std::string goods;
    ///
    ///  <summary> * 销售的数量 </summary>
    ///
    int saleNum;
public:
    virtual std::string getGoods();
    virtual void setGoods(std::string goods);
    virtual int getSaleNum();
    virtual void setSaleNum(int saleNum);

    virtual std::string ToString();
};
}
}
}
}
}