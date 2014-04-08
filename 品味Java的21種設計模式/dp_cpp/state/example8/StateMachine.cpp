#include "StateMachine.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example8 {

void StateMachine::doWork() {
    //转调相应的状态对象真正完成功能处理
    this->state->doWork(this);
}

State *StateMachine::getState() {
    return state;
}

void StateMachine::setState(State *state) {
    this->state = state;
}

object *StateMachine::getBusinessVO() {
    return businessVO;
}

void StateMachine::setBusinessVO(object *businessVO) {
    this->businessVO = businessVO;
}
}
}
}
}
}
