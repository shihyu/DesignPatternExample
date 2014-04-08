#include "PersonalOrder.h"

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example7 {

int PersonalOrder::getOrderProductNum() {
    return this->orderProductNum;
}

void PersonalOrder::setOrderProductNum(int num) {
    this->orderProductNum = num;
}

std::string PersonalOrder::getCustomerName() {
    return customerName;
}

void PersonalOrder::setCustomerName(std::string customerName) {
    this->customerName = customerName;
}

Product *PersonalOrder::getProduct() {
    return product;
}

void PersonalOrder::setProduct(Product *product) {
    this->product = product;
}

std::string PersonalOrder::ToString() {
    //简单点输出
    return "订购产品是=" + this->product->getName() + "，订购数量为=" + this->orderProductNum;
}

object *PersonalOrder::clone() {
    PersonalOrder *obj = 0;

    try {
        obj = static_cast<PersonalOrder *>(__super::clone());
        //这一句话不可少
        //          obj.setProduct((Product)this.product.clone());
    } catch (CloneNotSupportedException *e) {
        e->printStackTrace();
    }

    return obj;
}
}
}
}
}
}
