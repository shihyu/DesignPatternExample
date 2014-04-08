#pragma once

#include "LeaveRequestState.h"
#include "StateMachine.h"
#include "LeaveRequestModel.h"
#include "DepManagerState.h"
#include "AuditOverState.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example8 {

///
/// <summary> * 处理项目经理的审核，处理后可能对应部门经理审核、审核结束之中的一种 </summary>
///
class ProjectManagerState : public LeaveRequestState {
public:
    virtual void doWork(StateMachine *request);
};

}
}
}
}
}