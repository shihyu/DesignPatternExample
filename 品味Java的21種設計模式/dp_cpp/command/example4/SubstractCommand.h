#pragma once

#include "Command.h"
#include "OperationApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example4 {
///
/// <summary> * 具体的减法命令实现对象 </summary>
///
class SubstractCommand : public Command {
    ///
    ///  <summary> * 持有具体执行计算的对象 </summary>
    ///
private:
    OperationApi *operation;
    ///
    ///  <summary> * 操作的数据，也就是要减去的数据 </summary>
    ///
    int opeNum;
    ///
    ///  <summary> * 构造方法，传入具体执行计算的对象 </summary>
    ///  * <param name="operation"> 具体执行计算的对象 </param>
    ///  * <param name="opeNum"> 要减去的数据 </param>
    ///
public:
    SubstractCommand(OperationApi *operation, int opeNum);

    virtual void execute();

    virtual void undo();
};

}
}
}
}
}