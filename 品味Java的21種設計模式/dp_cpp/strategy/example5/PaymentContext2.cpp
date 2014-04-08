#include "PaymentContext2.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example5 {

PaymentContext2::PaymentContext2(std::string userName, double money, std::string account, PaymentStrategy *strategy) : PaymentContext(userName, money, strategy) {
    this->account = account;
}

std::string PaymentContext2::getAccount() {
    return account;
}
}
}
}
}
}
