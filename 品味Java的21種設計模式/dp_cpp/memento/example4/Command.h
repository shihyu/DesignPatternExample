#pragma once

#include "Memento.h"

namespace cn {
namespace javass {
namespace dp {
namespace memento {
namespace example4 {
///
/// <summary> * 定义一个命令的接口 </summary>
///
class Command {
    ///
    ///  <summary> * 执行命令 </summary>
    ///
public:
    virtual public void execute() = 0;
    ///
    ///  <summary> * 撤销命令，恢复到备忘录对象记录的状态 </summary>
    ///  * <param name="m"> 备忘录对象 </param>
    ///
    virtual public void undo(Memento *) = 0;
    ///
    ///  <summary> * 重做命令，恢复到备忘录对象记录的状态 </summary>
    ///  * <param name="m"> 备忘录对象 </param>
    ///
    virtual public void redo(Memento *) = 0;
    ///
    ///  <summary> * 创建保存原发器对象的状态的备忘录对象 </summary>
    ///  * <returns> 创建好的备忘录对象 </returns>
    ///
    virtual public Memento *createMemento() = 0;
};

}
}
}
}
}