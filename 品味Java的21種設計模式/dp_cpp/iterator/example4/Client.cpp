#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace iterator {
namespace example4 {

void Client::main(std::string args[]) {
    //访问集团的工资列表
    PayManager *payManager = new PayManager();
    //先计算再获取
    payManager->calcPay();
    Collection<PayModel *> *payList = payManager->getPayList();
    puts("集团工资列表：");

    //      Iterator it = payList.iterator();
    //      while(it.hasNext()){
    //          PayModel pm = (PayModel)it.next();
    //          System.out.println(pm);
    //      }
    for (Collection<PayModel *>::const_iterator pm = payList->begin(); pm != payList->end(); ++pm) {
        puts(*pm);
    }

    //访问新收购公司的工资列表
    SalaryManager *salaryManager = new SalaryManager();
    //先计算再获取
    salaryManager->calcSalary();
    //ORIGINAL LINE: PayModel[] pms = salaryManager.getPays();
    //JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
    PayModel *pms = salaryManager->getPays();
    puts("新收购的公司工资列表：");

    //      for(int i=0;i<pms.length;i++){
    //          System.out.println(pms[i]);
    //      }
    for (PayModel::const_iterator pm = pms->begin(); pm != pms->end(); ++pm) {
        puts(*pm);
    }
}
}
}
}
}
}
