#pragma once

#include "OrderApi.h"
#include "Product.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example6 {
///
/// <summary> * 个人订单对象 </summary>
///
class PersonalOrder : public OrderApi {
    ///
    ///  <summary> * 订购人员姓名 </summary>
    ///
private:
    std::string customerName;
    ///
    ///  <summary> * 产品对象 </summary>
    ///
    Product *product;
    ///
    ///  <summary> * 订单产品数量 </summary>
    ///
    int orderProductNum;

public:
    virtual int getOrderProductNum();
    virtual void setOrderProductNum(int num);
    virtual std::string getCustomerName();
    virtual void setCustomerName(std::string customerName);
    virtual Product *getProduct();
    virtual void setProduct(Product *product);

    virtual std::string ToString();

    virtual OrderApi *cloneOrder();
};

}
}
}
}
}