#pragma once

#include "FlowAMockMemento.h"
#include <string>

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example3 {


///
/// <summary> * 模拟运行流程A，只是一个示意，代指某个具体流程 </summary>
///
class FlowAMock : public Serializable {
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
    ///
    ///  <summary> * 创建保存原发器对象的状态的备忘录对象 </summary>
    ///  * <returns> 创建好的备忘录对象 </returns>
    ///
    virtual FlowAMockMemento *createMemento();
    ///
    ///  <summary> * 重新设置原发器对象的状态，让其回到备忘录对象记录的状态 </summary>
    ///  * <param name="memento"> 记录有原发器状态的备忘录对象 </param>
    ///
    virtual void setMemento(FlowAMockMemento *memento);
    ///
    ///  <summary> * 真正的备忘录对象，实现备忘录窄接口
    ///  * 实现成私有的内部类，不让外部访问 </summary>
    ///
private:
    class MementoImpl : public FlowAMockMemento {
        ///
        ///      <summary> * 示意，保存某个中间结果 </summary>
        ///
    private:
        int tempResult;
        ///
        ///      <summary> * 示意，保存某个中间结果 </summary>
        ///
        std::string tempState;
    public:
        MementoImpl(int tempResult, std::string tempState);
        virtual int getTempResult();
        virtual std::string getTempState();
    };
};

}
}
}
}
}