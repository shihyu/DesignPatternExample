#include "PersonalOrder.h"

namespace cn {
namespace javass {
namespace dp {
namespace prototype {
namespace example6 {

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

OrderApi *PersonalOrder::cloneOrder() {
    //创建一个新的订单，然后把本实例的数据复制过去
    PersonalOrder *order = new PersonalOrder();
    order->setCustomerName(this->customerName);
    order->setOrderProductNum(this->orderProductNum);
    //对于对象类型的数据，深度克隆的时候需要继续调用这个对象的克隆方法
    order->setProduct(static_cast<Product *>(this->product->cloneProduct()));
    return order;
}
}
}
}
}
}
