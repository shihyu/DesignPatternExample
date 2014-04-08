#include "LogDecorator.h"

namespace cn {
namespace javass {
namespace dp {
namespace decorator {
namespace example6 {

LogDecorator::LogDecorator(GoodsSaleEbi *ebi) : Decorator(ebi) {
}

bool LogDecorator::sale(std::string user, std::string customer, SaleModel *saleModel) {
    //执行业务功能
    bool f = this->ebi->sale(user, customer, saleModel);
    //在执行业务功能过后，记录日志
    DateFormat *df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss SSS");
    puts("日志记录：" + user + "于" + df->format(new Date()) + "时保存了一条销售记录，客户是" + customer + ",购买记录是" + saleModel);
    return f;
}
}
}
}
}
}
