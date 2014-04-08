#include "ServiceRequestVisitor.h"

namespace cn {
namespace javass {
namespace dp {
namespace visitor {
namespace example4 {

void ServiceRequestVisitor::visitEnterpriseCustomer(EnterpriseCustomer *ec) {
    //企业客户提出的具体服务请求
    puts(ec->getName() + "企业提出服务请求");
}

void ServiceRequestVisitor::visitPersonalCustomer(PersonalCustomer *pc) {
    //个人客户提出的具体服务请求
    puts("客户" + pc->getName() + "提出服务请求");
}
}
}
}
}
}
