#include "Customer.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example4 {

std::string Customer::getCustomerId() {
    return customerId;
}

void Customer::setCustomerId(std::string customerId) {
    this->customerId = customerId;
}

std::string Customer::getName() {
    return name;
}

void Customer::setName(std::string name) {
    this->name = name;
}
}
}
}
}
}
