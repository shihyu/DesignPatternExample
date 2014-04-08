#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example7 {

void Client::main(std::string args[]) {
    //访问新收购公司的工资列表
    SalaryManager *salaryManager = new SalaryManager();
    //先计算再获取
    salaryManager->calcSalary();

    //得到双向迭代器
    Iterator it = salaryManager->createIterator();
    //首先设置迭代器到第一个元素
    it->first();

    //先next一个
    if (!it->isDone()) {
        PayModel *pm = static_cast<PayModel *>(it->currentItem());
        puts("next1 == " + pm);
        //向下迭代一个
        it->next();
    }

    //然后previous一个
    if (!it->isFirst()) {
        //向前迭代一个
        it->previous();
        PayModel *pm = static_cast<PayModel *>(it->currentItem());
        puts("previous1 == " + pm);
    }

    //再next一个
    if (!it->isDone()) {
        PayModel *pm = static_cast<PayModel *>(it->currentItem());
        puts("next2 == " + pm);
        //向下迭代一个
        it->next();
    }

    //继续next一个
    if (!it->isDone()) {
        PayModel *pm = static_cast<PayModel *>(it->currentItem());
        puts("next3 == " + pm);
        //向下迭代一个
        it->next();
    }

    //然后previous一个
    if (!it->isFirst()) {
        //向前迭代一个
        it->previous();
        PayModel *pm = static_cast<PayModel *>(it->currentItem());
        puts("previous2 == " + pm);
    }

}
}
}
}
}
}
