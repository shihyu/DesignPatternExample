#include "Client.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example2 {

void Client::main(std::string args[]) {
    //准备点测试数据
    Collection<Customer *> *colCustomer = preparedTestData();

    //循环对客户进行操作
    for (Collection<Customer *>::const_iterator cm = colCustomer->begin(); cm != colCustomer->end(); ++cm) {
        //进行偏好分析
        (*cm)->predilectionAnalyze();
        //进行价值分析
        (*cm)->worthAnalyze();
    }
}

Collection<Customer *> *Client::preparedTestData() {
    Collection<Customer *> *colCustomer = std::vector<Customer *>();
    //为了测试方便，准备点数据
    Customer *cm1 = new EnterpriseCustomer();
    cm1->setName("ABC集团");
    colCustomer->add(cm1);

    Customer *cm2 = new EnterpriseCustomer();
    cm2->setName("CDE公司");
    colCustomer->add(cm2);

    Customer *cm3 = new PersonalCustomer();
    cm3->setName("张三");
    colCustomer->add(cm3);

    return colCustomer;
}
}
}
}
}
}
