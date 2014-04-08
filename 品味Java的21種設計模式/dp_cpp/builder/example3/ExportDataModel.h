#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace builder {
namespace example3 {
///
/// <summary> * 描述输出数据的对象 </summary>
///
class ExportDataModel {
    ///
    ///  <summary> * 产品编号 </summary>
    ///
private:
    std::string productId;
    ///
    ///  <summary> * 销售价格 </summary>
    ///
    double price;
    ///
    ///  <summary> * 销售数量 </summary>
    ///
    double amount;

public:
    virtual std::string getProductId();
    virtual void setProductId(std::string productId);
    virtual double getPrice();
    virtual void setPrice(double price);
    virtual double getAmount();
    virtual void setAmount(double amount);

};

}
}
}
}
}