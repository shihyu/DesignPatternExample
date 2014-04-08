#pragma once

#include "Command.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {
///
/// <summary> * 计算器类，计算器上有加法按钮、减法按钮 </summary>
///
class Calculator2 {
    ///
    ///  <summary> * 持有执行加法的命令对象 </summary>
    ///
private:
    Command *addCmd;
    ///
    ///  <summary> * 持有执行减法的命令对象 </summary>
    ///
    Command *substractCmd;
    ///
    ///  <summary> * 设置执行加法的命令对象 </summary>
    ///  * <param name="addCmd"> 执行加法的命令对象 </param>
    ///
public:
    virtual void setAddCmd(Command *addCmd);
    ///
    ///  <summary> * 设置执行减法的命令对象 </summary>
    ///  * <param name="substractCmd"> 执行减法的命令对象 </param>
    ///
    virtual void setSubstractCmd(Command *substractCmd);
    ///
    ///  <summary> * 提供给客户使用，执行加法功能 </summary>
    ///
    virtual void addPressed();
    ///
    ///  <summary> * 提供给客户使用，执行减法功能 </summary>
    ///
    virtual void substractPressed();
};

}
}
}
}
}