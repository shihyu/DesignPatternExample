#include "CooperateCustomerStrategy.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example4 {

double CooperateCustomerStrategy::calcPrice(double goodsPrice) {
    puts("对于战略合作客户，统一8折");
    return goodsPrice * 0.8;
}
}
}
}
}
}
