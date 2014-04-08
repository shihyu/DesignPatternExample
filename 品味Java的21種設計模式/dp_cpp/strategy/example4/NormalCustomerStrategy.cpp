#include "NormalCustomerStrategy.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example4 {

double NormalCustomerStrategy::calcPrice(double goodsPrice) {
    puts("对于新客户或者是普通客户，没有折扣");
    return goodsPrice;
}
}
}
}
}
}
