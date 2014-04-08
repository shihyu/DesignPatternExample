#pragma once

#include "LeaveRequestState.h"
#include "StateMachine.h"
#include "LeaveRequestModel.h"
#include "AuditOverState.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example8 {


///
/// <summary> * 处理部门经理的审核，处理后对应审核结束状态 </summary>
///
class DepManagerState : public LeaveRequestState {
public:
    virtual void doWork(StateMachine *request);
};

}
}
}
}
}