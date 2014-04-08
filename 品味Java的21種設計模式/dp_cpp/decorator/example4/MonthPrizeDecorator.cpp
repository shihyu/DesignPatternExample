#include "MonthPrizeDecorator.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example4 {

MonthPrizeDecorator::MonthPrizeDecorator(Component *c) : Decorator(c) {
}

double MonthPrizeDecorator::calcPrize(std::string user, Date *begin, Date *end) {
    //1：先获取前面运算出来的奖金
    double money = Decorator::calcPrize(user, begin, end);
    //2：然后计算当月业务奖金,按照人员和时间去获取当月的业务额，然后再乘以3%
    double prize = TempDB::mapMonthSaleMoney->get(user) * 0.03;
    puts(user + "当月业务奖金" + prize);
    return money + prize;
}
}
}
}
}
}
