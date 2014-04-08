#pragma once

#include "PaymentStrategy.h"
#include "PaymentContext.h"
#include "PaymentContext2.h"

namespace cn {
namespace javass {
namespace dp {
namespace strategy {
namespace example5 {
///
/// <summary> * 支付到银行卡 </summary>
///
class Card : public PaymentStrategy {

public:
    virtual void pay(PaymentContext *ctx);
};

}
}
}
}
}