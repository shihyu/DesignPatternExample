#pragma once

#include "CookApi.h"

namespace cn {
namespace javass {
namespace dp {
namespace command {
namespace example6 {
///
/// <summary> * 命令接口，声明执行的操作 </summary>
///
class Command {
    ///
    ///  <summary> * 执行命令对应的操作 </summary>
    ///
public:
    virtual public void execute() = 0;
    ///
    ///  <summary> * 设置命令的接收者 </summary>
    ///  * <param name="cookApi"> 命令的接收者  </param>
    ///
    virtual public void setCookApi(CookApi *) = 0;
    ///
    ///  <summary> * 返回发起请求的桌号，就是点菜的桌号 </summary>
    ///  * <returns> 发起请求的桌号 </returns>
    ///
    virtual public int getTableNum() = 0;
};
}
}
}
}
}