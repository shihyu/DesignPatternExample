#pragma once

#include "Memento.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example4 {

///
/// <summary> * 操作运算的接口 </summary>
///
class OperationApi {
    ///
    ///  <summary> * 获取计算完成后的结果 </summary>
    ///  * <returns> 计算完成后的结果 </returns>
    ///
public:
    virtual public int getResult() = 0;
    ///
    ///  <summary> * 执行加法 </summary>
    ///  * <param name="num"> 需要加的数 </param>
    ///
    virtual public void add(int) = 0;
    ///
    ///  <summary> * 执行减法 </summary>
    ///  * <param name="num"> 需要减的数 </param>
    ///
    virtual public void substract(int) = 0;

    ///
    ///  <summary> * 创建保存原发器对象的状态的备忘录对象 </summary>
    ///  * <returns> 创建好的备忘录对象 </returns>
    ///
    virtual public Memento *createMemento() = 0;
    ///
    ///  <summary> * 重新设置原发器对象的状态，让其回到备忘录对象记录的状态 </summary>
    ///  * <param name="memento"> 记录有原发器状态的备忘录对象 </param>
    ///
    virtual public void setMemento(Memento *) = 0;
};

}
}
}
}
}