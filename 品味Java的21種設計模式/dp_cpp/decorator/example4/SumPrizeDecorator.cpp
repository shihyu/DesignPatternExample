#include "SumPrizeDecorator.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example4 {

SumPrizeDecorator::SumPrizeDecorator(Component *c) : Decorator(c) {
}

double SumPrizeDecorator::calcPrize(std::string user, Date *begin, Date *end) {
    //1：先获取前面运算出来的奖金
    double money = Decorator::calcPrize(user, begin, end);
    //2：然后计算累计奖金,其实这里应该按照人员去获取累计的业务额，然后再乘以0.1%
    //简单演示一下，假定大家的累计业务额都是1000000元
    double prize = 1000000 * 0.001;
    puts(user + "累计奖金" + prize);
    return money + prize;
}
}
}
}
}
}
