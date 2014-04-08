#pragma once

#include "State.h"

namespace cn {
namespace javass {
namespace dp {
namespace state {
namespace example8 {
///
/// <summary> * 公共状态处理机，相当于状态模式的Context
/// * 包含所有流程使用状态模式时的公共功能 </summary>
///
class StateMachine {
    ///
    ///  <summary> * 持有一个状态对象 </summary>
    ///
private:
    State *state;
    ///
    ///  <summary> * 包含流程处理需要的业务数据对象，不知道具体类型,
    ///  * 用Object，反正只是传递到具体的状态对象里面 </summary>
    ///
    object *businessVO;
    ///
    ///  <summary> * 执行工作，客户端处理流程的接口方法。
    ///  * 在客户完成自己的业务工作后调用 </summary>
    ///
public:
    virtual void doWork();

    virtual State *getState();
    virtual void setState(State *state);
    virtual object *getBusinessVO();
    virtual void setBusinessVO(object *businessVO);
};

}
}
}
}
}