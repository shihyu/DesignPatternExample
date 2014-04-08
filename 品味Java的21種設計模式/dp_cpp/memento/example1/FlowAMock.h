#pragma once

#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example1 {
///
/// <summary> * 模拟运行流程A，只是一个示意，代指某个具体流程 </summary>
///
class FlowAMock {
    ///
    ///  <summary> * 流程名称，不需要外部存储的状态数据 </summary>
    ///
private:
    std::string flowName;
    ///
    ///  <summary> * 示意，代指某个中间结果，需要外部存储的状态数据 </summary>
    ///
    int tempResult;
    ///
    ///  <summary> * 示意，代指某个中间结果，需要外部存储的状态数据 </summary>
    ///
    std::string tempState;
    ///
    ///  <summary> * 构造方法，传入流程名称 </summary>
    ///  * <param name="flowName"> 流程名称 </param>
    ///
public:
    FlowAMock(std::string flowName);

    virtual std::string getTempState();
    virtual void setTempState(std::string tempState);
    virtual int getTempResult();
    virtual void setTempResult(int tempResult);

    ///
    ///  <summary> * 示意，运行流程的第一个阶段 </summary>
    ///
    virtual void runPhaseOne();
    ///
    ///  <summary> * 示意，按照方案一来运行流程后半部分 </summary>
    ///
    virtual void schema1();
    ///
    ///  <summary> * 示意，按照方案二来运行流程后半部分 </summary>
    ///
    virtual void schema2();
};

}
}
}
}
}