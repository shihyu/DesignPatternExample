#include "AuditOverState.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example7 {

void AuditOverState::doWork(StateMachine *request) {
    //先把业务对象造型回来
    LeaveRequestModel *lrm = static_cast<LeaveRequestModel *>(request->getBusinessVO());

    //业务处理，在数据里面记录整个流程结束
}
}
}
}
}
}
